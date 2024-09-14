import pyttsx3
import datetime
import speech_recognition as sr
import pyaudio
import wikipedia
import webbrowser
import os
import keyboard


engine = pyttsx3.init('sapi5')
voices= engine.getProperty('voices')

engine.setProperty('voice',voices[1].id)

def speak(audio):
    engine.say(audio)
    engine.runAndWait()

def wishme():
    hour=int(datetime.datetime.now().hour)
    if hour==0 and hour<12:
        speak("Good Morning")

    elif hour>=12 and hour<18:
        speak("Good Afternoon")

    else:
        speak("Good Evening")
    speak("As you know me i don't need to introduce myself")
    speak("your baddie is at your service")

def takecommand():
    #taking input as speech and converting in string 

    r=sr.Recognizer()
    with sr.Microphone() as source:
        print("Listening....")
        r.pause_threshold = 1
        audio=r.listen(source)

    try:
        print("Recognising.....")
        k = r.recognize_google(audio, language= 'en-in')
        query=k.lower()
        print("user said",query)

    except: 

        print("Say that again please...")
        return "None"
    return query

def speechreg():
     l=sr.Recognizer()
     with sr.Microphone() as source:
        print("Please tell me whether to Continue or Exit")
        audio=l.listen(source)

     try:
        print("Recognising.....")
        k = l.recognize_google(audio, language= 'en-in')
        query=k.lower()
        print("user said",query)

     except: 

        print("Say that again please...")
        return "None"
     return query


global i
i=0
def nextmusic():
    global i
    music_dir='D:\\Music\\Party'
    songs=os.listdir(music_dir)
    i=i+1
    os.startfile(os.path.join(music_dir,songs[i]))

def previousmusic():
    global i
    music_dir='D:\\Music\\Party'
    songs=os.listdir(music_dir)
    i=i-1
    os.startfile(os.path.join(music_dir,songs[i]))

def again():
    choice=speechreg()
    if choice=="exit":
        exit()
            
    elif choice=="continue":
        print("how may i assist you..")

    else:
        print("Invalid choice")
        again()    

if __name__=="__main__":
    print("AUGUST")
    #wishme()
    while True:
        query=takecommand().lower()
        #logic for executing task  based on query
        
        if "wikipedia" in query:
            speak("searching wikipedia...")
            query=query.replace("wikipedia","")
            results=wikipedia.summary(query,sentences=2)
            speak("According to wikipedia...")
            print(results)
            speak(results)

        if "open youtube" in query:
            webbrowser.open("https://www.youtube.com/")

        if "open google" in query:
            webbrowser.open("https://www.google.com/")
        
        if "open moviesmod" in query:
            webbrowser.open("moviesmod.fit")    
        
        if "open stack overflow" in query:
            webbrowser.open("https://stackoverflow.com/")
 
        if "play music" in query:
            music_dir='D:\\Music\\Party'
            songs=os.listdir(music_dir)
            #print(songs)
            os.startfile(os.path.join(music_dir,songs[0]))
            
        if "next song" in query:
            nextmusic() 

        if "previous song" in query:
            previousmusic() 

        if "open windows" in query:
            keyboard.press_and_release("windows+e") 

        if "open documents" in query:
            doc="C:\\Users\\Deep\\Documents"  
            os.startfile(os.path.join(doc))   

        if "open photos" in query:
            photos="D:\\photos"
            os.startfile(os.path.join(photos))

        if "open watch dogs" in query:
            os.startfile(r"E:\Watch Dogs 2\bin\WatchDogs2.exe")

        if "the time" in query:
            time=datetime.datetime.now().strftime("%H:%M:%S")
            print(time)
            speak("Sir,the time is {time}")

        else:
            again()

# Created by soumodeep santra           
            
    
        