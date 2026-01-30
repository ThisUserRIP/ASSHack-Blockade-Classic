#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Security_Cryptography_CipherMode.h"
#include "System_Security_Cryptography_PaddingMode.h"
#include "System_Security_Cryptography_RijndaelManagedTransformMode.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace mscorlib::System::Security::Cryptography
{
	struct RijndaelManagedTransform : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Security::Cryptography::CipherMode m_cipherMode;
		mscorlib::System::Security::Cryptography::PaddingMode m_paddingValue;
		mscorlib::System::Security::Cryptography::RijndaelManagedTransformMode m_transformMode;
		int32_t m_blockSizeBits;
		int32_t m_blockSizeBytes;
		int32_t m_inputBlockSize;
		int32_t m_outputBlockSize;
		IL2CPP::Array<int32_t>* m_encryptKeyExpansion;
		IL2CPP::Array<int32_t>* m_decryptKeyExpansion;
		int32_t m_Nr;
		int32_t m_Nb;
		int32_t m_Nk;
		IL2CPP::Array<int32_t>* m_encryptindex;
		IL2CPP::Array<int32_t>* m_decryptindex;
		IL2CPP::Array<int32_t>* m_IV;
		IL2CPP::Array<int32_t>* m_lastBlockBuffer;
		IL2CPP::Array<uint8_t>* m_depadBuffer;
		IL2CPP::Array<uint8_t>* m_shiftRegister;
		struct StaticFields
		{
			IL2CPP::Array<uint8_t>* s_Sbox;
			IL2CPP::Array<int32_t>* s_Rcon;
			IL2CPP::Array<int32_t>* s_T;
			IL2CPP::Array<int32_t>* s_TF;
			IL2CPP::Array<int32_t>* s_iT;
			IL2CPP::Array<int32_t>* s_iTF;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(IL2CPP::Array<uint8_t>* rgbKey, mscorlib::System::Security::Cryptography::CipherMode mode, IL2CPP::Array<uint8_t>* rgbIV, int32_t blockSize, int32_t feedbackSize, mscorlib::System::Security::Cryptography::PaddingMode PaddingValue, mscorlib::System::Security::Cryptography::RijndaelManagedTransformMode transformMode);
		void Dispose();
		void Clear();
		void Dispose(bool disposing);
		int32_t get_BlockSizeValue();
		int32_t get_InputBlockSize();
		int32_t get_OutputBlockSize();
		bool get_CanTransformMultipleBlocks();
		bool get_CanReuseTransform();
		int32_t TransformBlock(IL2CPP::Array<uint8_t>* inputBuffer, int32_t inputOffset, int32_t inputCount, IL2CPP::Array<uint8_t>* outputBuffer, int32_t outputOffset);
		IL2CPP::Array<uint8_t>* TransformFinalBlock(IL2CPP::Array<uint8_t>* inputBuffer, int32_t inputOffset, int32_t inputCount);
		void Reset();
		int32_t EncryptData(IL2CPP::Array<uint8_t>* inputBuffer, int32_t inputOffset, int32_t inputCount, IL2CPP::Array<uint8_t>& outputBuffer, int32_t outputOffset, mscorlib::System::Security::Cryptography::PaddingMode paddingMode, bool fLast);
		int32_t DecryptData(IL2CPP::Array<uint8_t>* inputBuffer, int32_t inputOffset, int32_t inputCount, IL2CPP::Array<uint8_t>& outputBuffer, int32_t outputOffset, mscorlib::System::Security::Cryptography::PaddingMode paddingMode, bool fLast);
		void Enc(int32_t* encryptindex, int32_t* encryptKeyExpansion, int32_t* T, int32_t* TF, int32_t* work, int32_t* temp);
		void Dec(int32_t* decryptindex, int32_t* decryptKeyExpansion, int32_t* iT, int32_t* iTF, int32_t* work, int32_t* temp);
		void GenerateKeyExpansion(IL2CPP::Array<uint8_t>* rgbKey);
		static int32_t rot1(int32_t val);
		static int32_t rot2(int32_t val);
		static int32_t rot3(int32_t val);
		static int32_t SubWord(int32_t a);
		static int32_t MulX(int32_t x);
		static void _cctor();
		void _ctor();
	};
}

