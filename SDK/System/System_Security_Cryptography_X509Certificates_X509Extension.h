#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Security_Cryptography_AsnEncodedData.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System::System::Security::Cryptography { struct AsnEncodedData; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };

namespace System::System::Security::Cryptography::X509Certificates
{
	struct X509Extension : System::Security::Cryptography::AsnEncodedData
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool _critical;
		void _ctor();
		bool get_Critical();
		void set_Critical(bool value);
		void CopyFrom(System::Security::Cryptography::AsnEncodedData* asnEncodedData);
		mscorlib::System::String* FormatUnkownData(IL2CPP::Array<uint8_t>* data);
	};
}

