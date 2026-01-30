#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Utilities_Zlib_Deflate.h"
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib { struct Deflate; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib
{
	struct Deflate_Config : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t good_length;
		int32_t max_lazy;
		int32_t nice_length;
		int32_t max_chain;
		int32_t func;
		void _ctor(int32_t good_length, int32_t max_lazy, int32_t nice_length, int32_t max_chain, int32_t func);
	};
}

