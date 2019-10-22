
# word Jumblr : A voice project scene for azure functions teen

Google Home mini, Photo by BENCE BOROS on Unsplash

I’m going to show you how to use Azure functions to build an Action for Google Assistant.

*More precisely we will look at how we can do fulfillment by webhook in Dialogflow, using a backend by Azure Functions.*

***TL;DR***
> 1. Go to [Google Actions Console](http://actions.google.com) and create a new project.
*   Setup Invocation 
* Build actions -> Integrate actions from dialogflow -> go to dialogflow
> 2. Set default welcome intent -> enable webhook call
 Set default fallback intent -> enable webhook call
> 3. for welcome, Store sessionID & word, generate a jumbled word from dictionary, send it as response.
> 4. for fallback, look for same session id, return the word in response.

This is a story about how I built my first Google Action. You might be asking yourself,* “what is a Google Action?”*

![Photo by [Kevin Bhagat](https://unsplash.com/@kevnbhagat?utm_source=medium&utm_medium=referral) on [Unsplash](https://unsplash.com?utm_source=medium&utm_medium=referral)](https://cdn-images-1.medium.com/max/12000/0*JyROyT2IkvhRTSO8)*Photo by [Kevin Bhagat](https://unsplash.com/@kevnbhagat?utm_source=medium&utm_medium=referral) on [Unsplash](https://unsplash.com?utm_source=medium&utm_medium=referral)*



### Actions on **Google** is a platform allowing developers to create software applications known as “Actions” that extend the functionality of the ***Google** Assistant*.





**Google Assistant** is an *artificial intelligence*-powered *virtual assistant* developed by Google that is primarily available on mobile and smart home devices. Google Assistant can Order food, Book Cabs by having Actions enabled by Zomato and Uber respectively.

Some individuals (like my grandparents, some doctors, and the differently abled) find that using their voice, rather than keyboards, makes it easier to get day-to-day tasks done. There have [even been predictions](https://www.cnbc.com/2019/04/18/voice-technology-will-replace-keyboards-in-five-years-vc-investor.html) that voice will replace keyboards on the workstations of the future! (But how will we code?!)

One of the benefits of building an app on a voice platform (like Google Assistant) is that it helps bring inclusiveness in [your Product](https://assistant.google.com/explore), making sure everyone gets the same benefits of the changes you believe in.

## *What’s word Jumblr?*

![Jumblr Logo](https://cdn-images-1.medium.com/max/3612/1*OcD9GsAQutwLvU1ftnhu4g.png)*Jumblr Logo*

My app [word Jumblr](https://assistant.google.com/u/2/services/a/uid/0000002f793261ed) is a game that gives you a jumbled word to unscramble.

![For people with other devices — ex. Windows Phone](https://cdn-images-1.medium.com/max/2160/1*lGtYG-200ax2TMvVZsQv0w.jpeg)*For people with other devices — ex. Windows Phone*

And, if you have an *Android* or *Apple* device you can install google assistant from your App store and you’re good to go.

## you can say to Google Assistant,

## *“ Hey Google, Talk to word Jumblr”.*


Let’s understand what happens when we invoke word Jumblr.

![Request Flow](https://cdn-images-1.medium.com/max/2000/1*TEsDXmf6H6b37KTsccLMTQ.png)*Request Flow*

Whenever a user says the phrase (An invocation to the Action), it triggers the Action and that triggers the Azure Function backend to handle the Request sent by the User in the phrase. 

Example — 
It might be “*Book me a cab from **Uber**” *which will invoke uber google action listed in Google Assistant directory and it will invoke their backend service.

For us it’s “*Talk to **word Jumblr***” what triggers our google action and then checks into dialogflow and then fowards request to our Backend Azure functions.

Here’s what you’ll need to get started: 

1. A Google account (You don’t need a Google Assistant device, you can test in the Actions portal)

1. A [Microsoft Azure account](https://azure.microsoft.com/free/?wt.mc_id=heroesvue-github-jopapa&WT.mc_id=azuremedium-blog-chwarren)

### Let’s get the party Started!

### ***
Step I*** —* Setup Google Actions*

Go to [Google Actions Console](http://actions.google.com) and create a new project.

![Create a New Project](https://cdn-images-1.medium.com/max/2880/1*rI0AupjUOYIEE4nfNSQMiQ.png)*Create a New Project*

![Actions Portal will suggest some Templates — Choose Conversational](https://cdn-images-1.medium.com/max/2880/1*A9gnN0C-iUBE2Fe0iEqztw.png)*Actions Portal will suggest some Templates — Choose Conversational*

Choose Conversational as I’ll be guiding how to setup intents and webhooks on which Customized experience will suit us best for this project.

![Choose Conversational down below the Menu.](https://cdn-images-1.medium.com/max/2000/1*tHrqL3qb0dr4hhuDu9vXhg.png)*Choose Conversational down below the Menu.*

* Setup invocation of the project — Invocation sets up how people will be using phrases to trigger our google action.

![Hey Dr. Music, can you play some good vibes?](https://cdn-images-1.medium.com/max/2880/1*pr-_lDGPbUdYpXktsBIJqQ.png)*Hey Dr. Music, can you play some good vibes?*

* Build actions -> Integrate actions from dialogflow -> go to dialogflow

![Setup Actions and Intents — DIALOGFLOW](https://cdn-images-1.medium.com/max/3456/1*J_8tzYYkd_fE9aCUDGuV6g.gif)*Setup Actions and Intents — DIALOGFLOW*

## Step II. Dialogflow

Dialogflow is a Google-owned developer of human–computer interaction technologies based on natural language conversations.

We will be dealing with Intents here — 
The Merriam-Webster dictionary gives the meaning as “the state of mind with which an act is done.” Tim Hallbom.

This means what Activity, or Events, or particular sets of message convey to do- Here, in** Welcome intent **— I want them to send request to my Azure function which will respond with a jumbled word.

![* Set default welcome intent](https://cdn-images-1.medium.com/max/2154/1*wEL71OPQtuXtrW7_MJ323A.png)** Set default welcome intent*

Set up events — 
*Welcome by Dialogflow*, *Google Assistant* Welcome and *Play game*.

Sometimes a user can ask a implicit invocation 
(instead of saying “Talk to word jumblr” he can say “play a game”)
and google action can automatically invoke word jumblr.

![Setting Events which invoke Welcome intent](https://cdn-images-1.medium.com/max/2000/1*Q2dkyV4wohKCVF0DGLpbbw.png)*Setting Events which invoke Welcome intent*

Now we need to train on what messages/phrases our intent will be same which is Welcome intent.

![Here are some training phrases](https://cdn-images-1.medium.com/max/2000/1*NzLhyWgOWI-W1gPmkdsP-Q.png)*Here are some training phrases*

Action and Parameters simplifies on the backend what intent action invocated our Azure function. If this goes up don’t worry we will be covering it later in **Step III**.

![Action ](https://cdn-images-1.medium.com/max/2000/1*v2OiIqaWtnQ7rGO0poPcFQ.png)*Action *

Last step would be turn on fulfilment and Enable webhook, so that whenever this event occurs it sends the request to our azure function URL.

![Enable Webhook](https://cdn-images-1.medium.com/max/2000/1*XhfFcmSm6sm5-pE9Mq1XZw.png)*Enable Webhook*

We need to do the same for **Default Fallback Intent**

Set action to unknown. 

![action of the intent](https://cdn-images-1.medium.com/max/2000/1*Ol78qaaGVHgAbJsg1vZoKA.png)*action of the intent*

Next go to Fulfilment and enable webhook.

![Dialogflow fulfilment](https://cdn-images-1.medium.com/max/2162/1*pGJ59qVYGisw9grrqvFgEQ.png)*Dialogflow fulfilment*

So we need a URL in webhook and that’s yet to happen.
Hold on to this tab and open a new one with ***portal.azure.com***

Now i know you are like hey ayush, stop this choo choo train and explain why are we setting intents and fulfillments.

<iframe src="https://medium.com/media/d61b954de1deeffd98cff4c95b02a6b9" frameborder=0></iframe>

Here we go with another diagram — 

![Step after Invoking Welcome intent](https://cdn-images-1.medium.com/max/2924/1*y6e6EJFX4xnwPInEZGfjLQ.png)*Step after Invoking Welcome intent*

When someone says, “*Talk to word jumblr*”, “*hi*”, “*hello*” etc. 
A request is sent to our App with a sessionID and action of the welcome intent which is ‘*input.welcome’*

have a look [here](https://dialogflow.com/docs/fulfillment/how-it-works) at [dialogflow documentation ](https://dialogflow.com/docs/fulfillment/how-it-works)to know what’s under the hood.

![Steps after fallback intent](https://cdn-images-1.medium.com/max/2676/1*rhFDmLhlyQC8vza-3TfzBA.png)*Steps after fallback intent*

So what’s fallback and Why do we need it here?
Whenever a user attempts to solve a word, our app needs an intent for that. Now the attempt can be any word, like anything, even “quit” or “bye” or something ambiguous, so this way having no intent and letting it fall into fallback might help us here.

A request is sent to our App with a sessionID and action of the fallback intent which is ‘*input.unknown’.*

## Step III. Preparing Azure Functions. 

Hope you opened Azure Portal in new tab coz it’s gonna get schwifty here — 

![](https://cdn-images-1.medium.com/max/2048/1*NzNP9S4VA3cNONIykXVdNg.png)



1. Create a function app

1. Choose a HTTP trigger function, name it invoke

1. Create another HTTP trigger function and name it HeyJumblr

But you’ll be like hey What’s Azure function?





**Azure** **Functions** is an event driven, compute-on-demand experience that extends the existing **Azure** application platform with capabilities to implement code triggered by events occurring in virtually. 

So what’s going in Function I (invoke)— 

<iframe src="https://medium.com/media/5e154e3af40625ac09329ba9dc2cc233" frameborder=0></iframe>

Dialogflow invokes our Azure function (function app 1) with the JSON request below — 

![Dialogflow request JSON](https://cdn-images-1.medium.com/max/4096/1*KxVQ3Mi-ZHedtPLn1HMf-g.png)*Dialogflow request JSON*

In the first function we just split the whole session string and get it replaced by the just the session id, reduce clutter maybe.
And then we pass the request to our heyjumblr (second az func) with the same session ID.

Notice what the *queryResult.action* have for us, it’s *“input.welcome”.
*That’s how we will recognise what intent called our function, whether someone said hi, or tried to guess a word.

But why do we need session ID?

Look here in the next function heyjumblr, this does the real work.
His work involves- 

1. Getting a word from Dictionary ( I used “random-word” npm module)
2. Jumbling the word 
3. Sending the word to dialogflow back

But here remains a more crucial step, when someone attempts to solve the word ( when we get “input.unknown” ) how do we know what word we gave the human to solve?

The solution here is pretty simple, storing the sessionID along with the word in a database so that we can recall which word was here in context.

Let’s have a attempt at that — 

<iframe src="https://medium.com/media/cf45d9d96d5689e1f26bf3b743409916" frameborder=0></iframe>


Our main function starts line no. 23 *module.exports*

In line no.26 we handle if the request contains action “*input.welcome*”, so that we now know someone said hi to our app,
to handle it we will grab a word which we got in line 27.

function on line no. 14 shuffleword() jumbles the word when passed to it as a parameter.

in line no. 29 We parsed the data exactly like how dialogflow can read it. 
We need to pass our word in fulfillment text in json so that Dialogflow can understand the text we send and read it aloud in the speaker.

you can read more about [dialogflow fulfillment response here](https://dialogflow.com/docs/fulfillment/how-it-works).
Because you can send many responses like cards which looks good on devices with Screen.

so our two steps in azure function is done.

For the third step we need to store the sessionID and Word somewhere.
I chose [***azure table storage](https://azure.microsoft.com/en-in/services/storage/tables/?&OCID=AID719810_SEM_eB3ulA7e&lnkd=Bing_Azure_Brand&msclkid=efcf0eae56d71a07513253a3568b4a9e&dclid=CjkKEQjwgLLoBRD9gLmF0MCgyoYBEiQAx7a83vz_FaIUQI5dLdkFyA8BSP2H2CJRPWwCqrw5ZbpFEkfw_wcB) ***which is more likely to help us as a tabular database — 

but we need a connection string to access permissions — 
Our friends at [Microsoft Docs](https://docs.microsoft.com/en-us/azure/storage/common/storage-configure-connection-string) can help with that.

In line no. 35–50 we stored a JSON object into the Table Storage.

Now let’s handle ***fallback intent.***

in line no.53 we handle if the object has a queryAction which is “*input.unknown*”
We know what to do now, Check in the table if same sessionID has a word stored with it and compare the word returned by user with our word.

“*queryResult.queryText*” has the text sent to us by the user. 
We compare it with the word we got, just like we did in line no. 54.

If the word is right we send the response, 
if the word is wrong we send the response.

Awesome here we are finished with our third step.

Now we need to return back to where we left in Step II and fill the webhook url as the invoke one.

Voila, Now you can test your app in dialogflow or in Action Console.

Points to be noted (Production app),

Please have at [How to Design Voice User Interfaces](https://www.interaction-design.org/literature/article/how-to-design-voice-user-interfaces), when building an App like this for production.

Also note cold-start might get in your way as google assistant only waits for 10s to get a response from webhook.
**cold start** is a term used to describe the phenomenon that applications which haven’t been used a while take longer to start up.

To get around with cold start use **Premium Plan** or a** App Service plan** to host Azure function.

Serverless is the most suitable compute systems for these type of projects, which needs just a backend and a task to perform based on an event or an invocation.

Thanks for reading this blog. 
Follow me for more awesome blogs.

I would recommend you to stay hydrated.

<iframe src="https://medium.com/media/4dac932c7a219fd19652cfd969c2f494" frameborder=0></iframe>


