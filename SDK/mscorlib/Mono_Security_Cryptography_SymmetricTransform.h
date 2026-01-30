#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Security::Cryptography { struct SymmetricAlgorithm; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_Security_Cryptography_PaddingMode.h"
namespace mscorlib::System::Security::Cryptography { struct RandomNumberGenerator; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::Mono::Security::Cryptography
{
	struct SymmetricTransform : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Security::Cryptography::SymmetricAlgorithm* algo;
		bool encrypt;
		int32_t BlockSizeByte;
		IL2CPP::Array<uint8_t>* temp;
		IL2CPP::Array<uint8_t>* temp2;
		IL2CPP::Array<uint8_t>* workBuff;
		IL2CPP::Array<uint8_t>* workout;
		mscorlib::System::Security::Cryptography::PaddingMode padmode;
		int32_t FeedBackByte;
		bool m_disposed;
		bool lastBlock;
		mscorlib::System::Security::Cryptography::RandomNumberGenerator* _rng;
		void _ctor(mscorlib::System::Security::Cryptography::SymmetricAlgorithm* symmAlgo, bool encryption, IL2CPP::Array<uint8_t>* rgbIV);
		void Finalize();
		void System_IDisposable_Dispose();
		void Dispose(bool disposing);
		bool get_CanTransformMultipleBlocks();
		bool get_CanReuseTransform();
		int32_t get_InputBlockSize();
		int32_t get_OutputBlockSize();
		void Transform(IL2CPP::Array<uint8_t>* input, IL2CPP::Array<uint8_t>* output);
		void ECB(IL2CPP::Array<uint8_t>* input, IL2CPP::Array<uint8_t>* output);
		void CBC(IL2CPP::Array<uint8_t>* input, IL2CPP::Array<uint8_t>* output);
		void CFB(IL2CPP::Array<uint8_t>* input, IL2CPP::Array<uint8_t>* output);
		void OFB(IL2CPP::Array<uint8_t>* input, IL2CPP::Array<uint8_t>* output);
		void CTS(IL2CPP::Array<uint8_t>* input, IL2CPP::Array<uint8_t>* output);
		void CheckInput(IL2CPP::Array<uint8_t>* inputBuffer, int32_t inputOffset, int32_t inputCount);
		int32_t TransformBlock(IL2CPP::Array<uint8_t>* inputBuffer, int32_t inputOffset, int32_t inputCount, IL2CPP::Array<uint8_t>* outputBuffer, int32_t outputOffset);
		bool get_KeepLastBlock();
		int32_t InternalTransformBlock(IL2CPP::Array<uint8_t>* inputBuffer, int32_t inputOffset, int32_t inputCount, IL2CPP::Array<uint8_t>* outputBuffer, int32_t outputOffset);
		void Random_(IL2CPP::Array<uint8_t>* buffer, int32_t start, int32_t length);
		void ThrowBadPaddingException(mscorlib::System::Security::Cryptography::PaddingMode padding, int32_t length, int32_t position);
		IL2CPP::Array<uint8_t>* FinalEncrypt(IL2CPP::Array<uint8_t>* inputBuffer, int32_t inputOffset, int32_t inputCount);
		IL2CPP::Array<uint8_t>* FinalDecrypt(IL2CPP::Array<uint8_t>* inputBuffer, int32_t inputOffset, int32_t inputCount);
		IL2CPP::Array<uint8_t>* TransformFinalBlock(IL2CPP::Array<uint8_t>* inputBuffer, int32_t inputOffset, int32_t inputCount);
	};
}

