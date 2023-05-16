import snscrape.modules.twitter as sntwitter
import pandas as pd 

data = []
query = ["prolife since:2022-06-29 until:2022-06-30"]
df = pd.DataFrame(columns=['Datetime', 'Tweet Id', 'Text', 'Username','retweet', 'likes', 'reply','qoute count' ,'hashtags',"coordinates"] )
df.to_csv('tweet_data_ab_1.csv')
print("start")
for q in query : 
    print(q)
    for i,tweet in enumerate(sntwitter.TwitterSearchScraper(q).get_items()):
        print(q)
        data.append([tweet.date, tweet.id, tweet.content, tweet.user.username , tweet.retweetCount, tweet.likeCount,tweet.replyCount,tweet.quoteCount, tweet.hashtags,tweet.coordinates])
        df = pd.DataFrame(data, columns=['Datetime', 'Tweet Id', 'Text', 'Username','retweet', 'likes','reply','qoute count','hashtags','coordinates'])
        df.to_csv('tweet_data_ab_1.csv' ,mode='a', index=False, header=False)
        print("working" + str(i))
        data.clear()