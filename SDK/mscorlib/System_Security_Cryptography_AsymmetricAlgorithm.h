#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Security::Cryptography { struct KeySizes; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };

namespace mscorlib::System::Security::Cryptography
{
	struct AsymmetricAlgorithm : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t KeySizeValue;
		IL2CPP::Array<mscorlib::System::Security::Cryptography::KeySizes*>* LegalKeySizesValue;
		void _ctor();
		void Dispose();
		void Clear();
		void Dispose(bool disposing);
		int32_t get_KeySize();
		void set_KeySize(int32_t value);
		IL2CPP::Array<mscorlib::System::Security::Cryptography::KeySizes*>* get_LegalKeySizes();
		mscorlib::System::String* get_SignatureAlgorithm();
		mscorlib::System::String* get_KeyExchangeAlgorithm();
		static mscorlib::System::Security::Cryptography::AsymmetricAlgorithm* Create();
		static mscorlib::System::Security::Cryptography::AsymmetricAlgorithm* Create(mscorlib::System::String* algName);
		void FromXmlString(mscorlib::System::String* xmlString);
		mscorlib::System::String* ToXmlString(bool includePrivateParameters);
	};
}

