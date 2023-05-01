pragma solidity ^0.8.17;

import "TheStore.sol";

contract Attack {

    TheStore public theStore;
    mapping(address => uint) public balances;

    // replace _theStoreAddress with the actual address for TheStore
    constructor() {
        theStore = TheStore( _theStoreAddress );
    }

    /* TODO: Implement the attack and payable function. Upon success, run checkFlag function */

    

    function checkFlag() public view returns (string memory) {
        require(address(this).balance >= 10 ether);
        bytes32 pass = 0x74683135206924207233336e7472346e63790000000000000000000000000000;
        return string(abi.encodePacked(pass));
    }
}