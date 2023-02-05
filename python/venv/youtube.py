import speech_recognition as sr


import pyttsx3
#import pyaudio
import pywhatkit

def talk(command):
    engine=pyttsx3.init()
    voice=engine.getproperty('voice')
    engine.setproperty('voice',voice[0].id)
    engine.say("playing"+ command)
    engine.runandwait()

def takeCommand():
    listener=sr.Recognizer()
    try:
        with sr.Microphone() as source:
            print("listening")
            
            voice=listener.listen(source)
            command=listener.recognize_google
            song=command.replace('play','')

            talk(song)
            pywhatkit.playonyoutube(song)


    except:
        pass    
    