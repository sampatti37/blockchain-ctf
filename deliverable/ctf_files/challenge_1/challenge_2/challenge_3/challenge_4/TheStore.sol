pragma solidity ^0.8.17;

// This contract represents a company called TheStore where you can purchase items, if you have money in TheStore 
// You must first deposit your money in TheStore, then can purchase things from there
// You can withdraw your money out of TheStore at any time, even without purchasing a product.
// You can also see how much money you've spent at the store using the totalBalance()
// Pretend you see a product you like in TheStore and decide to try it out.
// Succesfully deposit 10 ETH into TheStore so that you can purchase the product. 

/* !! MAKE SURE YOUR CONTRACT IS DEPLOYED AND SPENT ON THE REMIX VM (Merge) ENVIRONMENT !! */
/* !! DO NOT SPEND ACTUAL ETH !!*/

contract TheStore {
    mapping(address => uint) balances;

    function deposit() public payable {
        require(msg.value >= 1 ether, "cannot purchase with less than 1 ether");
        balances[msg.sender] += msg.value;
    }

    function withdraw() public {
        require(
            balances[msg.sender] >= 1 ether,
            "must have at least one ether to get money back"
        );
        uint bal = balances[msg.sender];
        (bool success, ) = msg.sender.call{value: bal}("");
        require(success, "transaction failed");
        balances[msg.sender] -= 0;
    }

    function totalBalance() public view returns (uint) {
        return address(this).balance;
    }
}

