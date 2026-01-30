#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Tsp_TspException.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp
{
	struct TspValidationException : Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TspException
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t failureCode;
		void _ctor(mscorlib::System::String* message);
		void _ctor(mscorlib::System::String* message, int32_t failureCode);
		int32_t get_FailureCode();
	};
}

