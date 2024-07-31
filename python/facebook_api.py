class User:
    def __init__(self, id, location, name, email):
        self.id = id
        self.location = location
        self.name = name
        self.email = email

class Message:
    def __init__(self, message_id, message_text, date_created, user_id):
        self.message_id = message_id
        self.message_text = message_text
        self.date_created = date_created
        self.user_id = user_id
        
class PostHandler:
    def __init__(self):
        self.posts = []
        
    def add_post(self, message):
        self.posts.append(message)
    
    def remove_post(self, message):
        if message in self.posts:
            self.posts.remove(message)
        return None
    
    def retrieve_post(self, count):
        return self.posts[-count:]
    
class UserHandler:
    def __init__(self):
        self.users = []
        self.follower_map = {}

    def add_user(self, user):
        self.users.append(user)
        self.follower_map[user.id] = []

    def get_user(self, id):
        for user in self.users:
            if user.id == id:
                return user
        return None
    
    def add_follower(self, user_id, follower_id):
        if user_id not in self.follower_map:
            self.follower_map[user_id] = []
        if follower_id not in self.follower_map:
            self.follower_map[follower_id] = []

        if follower_id not in self.follower_map[user_id]:
            self.follower_map[user_id].append(follower_id)
        
        
    def get_follower(self, user_id):
        if user_id not in self.follower_map:
            return None
        else:
            return self.follower_map[user_id]
    
    def remove_follower(self, user_id, follower_id):
        if user_id in self.follower_map:
            if follower_id in self.follower_map[user_id]:
                self.follower_map[user_id].remove(follower_id)
    
            
        
        
    