#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::Mono::Security { struct ASN1; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Text { struct StringBuilder; };

namespace mscorlib::Mono::Security::X509
{
	struct X509Extension : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* extnOid;
		bool extnCritical;
		mscorlib::Mono::Security::ASN1* extnValue;
		void _ctor(mscorlib::Mono::Security::ASN1* asn1);
		void Decode();
		bool Equals(mscorlib::System::Object* obj);
		int32_t GetHashCode();
		void WriteLine(mscorlib::System::Text::StringBuilder* sb, int32_t n, int32_t pos);
		mscorlib::System::String* ToString();
	};
}

