import hashlib
import json

NEW_FIRST_TRANSACTION = "9ca3dab46c0542afb6167e570cc4f8c1fe3f136519ed3785c4c8d49ecb859cb4"

with open("blocks/block_0.json") as f:
    data = json.load(f)
    print(hashlib.sha256(str(data).encode()).hexdigest())
