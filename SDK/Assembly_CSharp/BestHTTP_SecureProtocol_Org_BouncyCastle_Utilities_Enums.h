#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct Enum; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Array; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities
{
	struct Enums : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static mscorlib::System::Enum* GetEnumValue(mscorlib::System::Type* enumType, mscorlib::System::String* s);
		static mscorlib::System::Array* GetEnumValues(mscorlib::System::Type* enumType);
		static mscorlib::System::Enum* GetArbitraryValue(mscorlib::System::Type* enumType);
		static bool IsEnumType(mscorlib::System::Type* t);
		void _ctor();
	};
}

