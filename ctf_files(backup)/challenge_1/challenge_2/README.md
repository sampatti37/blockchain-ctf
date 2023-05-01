# Proof Of Work Flag

In this flag you are going to rewrite the blockchain to change its history! There are 5 blocks and you are going to change a transaction in the first block (`blocks/block_0.json`). For this change to be accepted by other miners you will need to make sure the hash of your new blocks all still have 4 leading zeros. To do this you will need to change the nonce of the new blocks.

Find the smallest nonce values that will satisfy this change in the blockchain. Make it so first transaction in `blocks/block_0.json` is `9ca3dab46c0542afb6167e570cc4f8c1fe3f136519ed3785c4c8d49ecb859cb4`. This value is already in the starter code.

The flag will be the sum of the 5 nonce values you find to satisfy this change.

### Hints

Start by making sure you can verify the current hashes of the blocks without making any changes. Running the unchanged starter code will give you the hash of the first block. Make sure this not only has 4 leading zeros but also matches the value of `prev_block` in `blocks/block_1.json`. Make sure you are using python3.