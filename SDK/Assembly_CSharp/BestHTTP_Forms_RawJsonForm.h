#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "BestHTTP_Forms_HTTPFormBase.h"
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP { struct HTTPRequest; };

namespace Assembly_CSharp::BestHTTP::Forms
{
	struct RawJsonForm : Assembly_CSharp::BestHTTP::Forms::HTTPFormBase
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<uint8_t>* CachedData;
		void PrepareRequest(Assembly_CSharp::BestHTTP::HTTPRequest* request);
		IL2CPP::Array<uint8_t>* GetData();
		void _ctor();
	};
}

