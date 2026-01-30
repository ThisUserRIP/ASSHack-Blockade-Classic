#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Security_Cryptography_KeyedHashAlgorithm.h"
namespace mscorlib::System::Security::Cryptography { struct ICryptoTransform; };
namespace mscorlib::System::Security::Cryptography { struct CryptoStream; };
namespace mscorlib::System::Security::Cryptography { struct TailStream; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Security::Cryptography { struct TripleDES; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct String; };
#include "System_Security_Cryptography_PaddingMode.h"
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace mscorlib::System::Security::Cryptography
{
	struct MACTripleDES : mscorlib::System::Security::Cryptography::KeyedHashAlgorithm
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Security::Cryptography::ICryptoTransform* m_encryptor;
		mscorlib::System::Security::Cryptography::CryptoStream* _cs;
		mscorlib::System::Security::Cryptography::TailStream* _ts;
		int32_t m_bytesPerBlock;
		mscorlib::System::Security::Cryptography::TripleDES* des;
		struct StaticFields
		{
			int32_t m_bitsPerByte;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void _ctor(IL2CPP::Array<uint8_t>* rgbKey);
		void _ctor(mscorlib::System::String* strTripleDES, IL2CPP::Array<uint8_t>* rgbKey);
		void Initialize();
		mscorlib::System::Security::Cryptography::PaddingMode get_Padding();
		void set_Padding(mscorlib::System::Security::Cryptography::PaddingMode value);
		void HashCore(IL2CPP::Array<uint8_t>* rgbData, int32_t ibStart, int32_t cbSize);
		IL2CPP::Array<uint8_t>* HashFinal();
		void Dispose(bool disposing);
	};
}

