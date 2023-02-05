
#import code
#from email.mime import audio
from re import L
# from ssl import api 
from time import strftime, time
import wolframalpha
import news_module

import pyttsx3 
import speech_recognition as sr
import wikipedia 
import webbrowser
import pywhatkit
import datetime
import os
import smtplib
import subprocess as sp


from bs4 import BeautifulSoup


engine = pyttsx3.init('sapi5')
voices = engine.getProperty('voices')
# print(voices[1].id)
engine.setProperty('voice', voices[1].id)
engine.setProperty('rate' , 135)



def speak(audio):
    engine.say(audio)
    engine.runAndWait()


def wishMe():
    hour = int(datetime.datetime.now().hour)
    if hour>=0 and hour<12:
        speak("Good Morning!")

    elif hour>=12 and hour<18:
        speak("Good Afternoon!")   

    else:
        speak("Good Evening!")  

    speak(" how may I help you")       

    
def takeCommand():
    #It takes microphone input from the user and returns string output

    r = sr.Recognizer()
    with sr.Microphone() as source:
        print("Listening...")
        r.pause_threshold = 0.5
        audio = r.listen(source)

    try:
        print("Recognizing...")    
        query = r.recognize_google(audio, language='en-in')
        print(f"User said: {query}\n")

    except Exception as e:
        # print(e)    
        print("i cannot understand. Can you repeat please ...")  
        return "None"
    return query

def openapps():
    speak("ok sir")
    if "live wallpaper" in query:
        sp.Popen("C:\\Users\\USER\\AppData\\Roaming\\Microsoft\\Windows\\Start Menu\\Programs\\Steam\\wallpaper engine")
        

def sendEmail(to, content):
    server = smtplib.SMTP('smtp.gmail.com', 587)
    server.ehlo()
    server.starttls()
    server.login('sukunauzi@gmail.com', 'amivulegechi')
    server.sendmail('sukunauzi@gmail.com', to, content)
    server.close()

    
if __name__ == "__main__":
    continueFlag = True
    wishMe()
    while True:
    # if 1:
        query = takeCommand().lower()

        # Logic for executing tasks based on query
        if 'wikipedia' in query:
            speak('Searching Wikipedia...')
            query = query.replace("wikipedia", "")
            results = wikipedia.summary(query, sentences=2)
            speak("according to wikipedia")
            print(results)
            speak(results)

        elif 'open youtube' in query:
            speak("opening youtube")
            pywhatkit.search("youtube.com")
            webbrowser.open("youtube.com")

        elif 'close the tab' in query:
            speak("closing")
            os.system(" taskkill /f /im chrome.exe")    
            os.system(" taskkill /f /im msedge.exe")    

        elif 'thank you' in query:
            speak("your welcome . im glad that i met your expectations")

        elif 'what can you do for me' in query:
            speak("i cant do everything for you . some time you have to do your own work by yourself")    

        elif 'introduce yourself' in query:
            speak("im a personal desktop assistant . you can call me zara . inspired by jarvis . i'm created for many reasons . im not fully complete ai system yet. how may i help you")

        elif 'temperature' in query:
            
                
            search = "temperature in kolkata"
            url = f"https://www.google.com/search?q={search}"
            r = "requests.get {url}"
            data = BeautifulSoup (r.text,"html.parser")
            temp = data.find("div",class_="BNeaWE").text
            speak(f"current {search} is {temp}")
       
       
        
            

        

                        




   
       
       
        elif 'google search' in query:
            import wikipedia as  googlescrap
            query = query.replace("pai","")
            query = query.replace("google search","")
            query = query.replace("google","")
            speak("this is what i found in web!")
            pywhatkit.search(query)

            try:
                result = googlescrap.summary(query,2)
                speak(result)

            except:
                speak("no speakeble data is available!")
       
        elif 'tell me a joke' in query:
        
            speak ("what kind of tea is hard to swallow . that is . reality")

        elif 'alarm' in query:
             speak("set the time !")
             time = input(":set the time:")
        

         #    while true :
          #      time_ac = datetime.datetime.now()
           #     now = Time_Ac.strftime("%H:%M:%S")
#
 #               if now == time:
  #                  speak("time to wake up sir !")
   #                 music_dir = 'D:\song'
    #                songs = os.listdir(music_dir)
     #               print(songs)    
      #              os.startfile(os.path.join(music_dir, songs[0]))
#
 #               elif now>time:
  #                  break    
                    
        
        elif 'who are you' in query:
            speak ("i am pai . your personal artificial intelligence")

        elif 'how are you' in query:
            speak ("i am fine . how are you sir ? " ) 

        elif 'i am fine' in query:
            speak ("thats marvelous . tell me how may i help you")

        elif 'sad' in query:
            speak ("thats ok . belive in yourself and make it happen . dont be upset . another morning is waiting for you . ")

        elif 'tell me a poem' in query:
            speak ("ok . i can do that . its a special poem from one of my creator . poem name is without you . without you , i feel broke like a house old . without you ive got no hands to hold . without you i feel empty road way too long . without you im a sad song . with out you i feel lie inthe court . without you ive got no sail in a boat . without you ive got no feelings to feel . so please just hold my hand and let me heal")        
        
        elif 'what is love' in query:
            speak ("wake up to reality . nothing ever goes as planned in this world . the longer you live the more you realize that in this reality , only pain suffering and futility exist.")
        
        
        
        elif 'open google' in query:
            speak("opening google")
            # webbrowser.open("google.com")
            pywhatkit.search("")
            
          

        elif 'news' in query:
            from NewsRead import latestnews
            latestnews()
              
       

        elif 'the time' in query:
            strTime = datetime.datetime.now().strftime("%H:%M:%S")    
            speak(f"Sir, the time is {strTime}")

        elif 'open code' in query:
            speak("opening live vs code")
            codePath = "C:\\Users\\USER\\AppData\\Roaming\\Microsoft\\Windows\\Start Menu\\Programs\\Visual Studio Code"
            os.startfile(codePath)
        
       

        elif 'open live wallpaper' in query:
              speak("opening live wallpaper")
              codePath = "C:\\Users\\USER\\AppData\\Roaming\\Microsoft\\Windows\\Start Menu\\Programs\\Steam\\wallpaper engine"    
       
        elif 'email to rajdeep' in query:
            try:
                speak("What should I say?")
                content = takeCommand()
                to = "sukunauzi@gmail.com"    
                sendEmail(to, content)
                speak("Email has been sent!")
            except Exception as e:
                print(e)
                speak("Sorry my friend Rajdeep bro. I am not able to send this email")

        elif 'close the program' in query:
            speak ('thank you , have a nice day' )  
            continueFlag=False     
            exit() 