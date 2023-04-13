#ifndef ENCRYPTION_H_
#define ENCRYPTION_H_

class Encryption {

public:
	void encrypt(unsigned char *inputMessage,
			unsigned char *encryptedCipherText, int noOfBlocks = 1);

	void initKeyForExpansion(unsigned char inputKey[16]); // 16 bytes/128bit key
	unsigned char expandedKeysArray[176]; // because we need to store 11 16 byte keys. 11*16=176 size for

private:
	static const unsigned char sBoxForSubstution[];
	static const unsigned char roundConstant[]; // roundConstant char array for initKeyForExpansion process
	static const unsigned char multiplyBy2[];
	static const unsigned char multiplyBy3[];

//	Main private methods for Encryption
	void bitWiseOperations(unsigned char *input, unsigned char c);
	void performBlockEncryption(unsigned char *message,
			unsigned char *encryptedMessage);

	void firstRound(unsigned char *state, unsigned char *roundKey);
	void roundEncryption(unsigned char *state, unsigned char *key);
	void lastRound(unsigned char *state, unsigned char *key);

	void substituteBytes(unsigned char *state);
	void shiftingRows(unsigned char *state);
	void mixingColumns(unsigned char *state);

	void coreKeyExpansion(int totalBytesCreated,
			unsigned char tempCoreStorage[4], int rconstantCurrIteration);
};

#endif /* ENCRYPTION_H_ */
