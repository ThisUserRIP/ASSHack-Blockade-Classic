#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Date { struct DateTimeObject; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix
{
	struct CertStatus : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t status;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Date::DateTimeObject* revocationDate;
		struct StaticFields
		{
			int32_t Unrevoked;
			int32_t Undetermined;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Date::DateTimeObject* get_RevocationDate();
		void set_RevocationDate(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Date::DateTimeObject* value);
		int32_t get_Status();
		void set_Status(int32_t value);
		void _ctor();
	};
}

