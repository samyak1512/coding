class User:
    def __init__(self, id, name, location, email):
        self.id = id
class UserHandler:
    def __init__(self):
        self.users = []
        self.follower_map = {}
    def add_user(self, user):
        self.users.append(user)
    def add_follower(self, user_id, follower_id):
        self.follower_map[user_id].append(follower_id)
    def remove_follower(self, user_id, follower_id):
        self.follower_map[user_id].remove(follower_id)
    