#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System::System::Net { struct HeaderParser; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System::System::Net
{
	struct HeaderInfo : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool IsRequestRestricted;
		bool IsResponseRestricted;
		System::Net::HeaderParser* Parser;
		mscorlib::System::String* HeaderName;
		bool AllowMultiValues;
		void _ctor(mscorlib::System::String* name, bool requestRestricted, bool responseRestricted, bool multi, System::Net::HeaderParser* p);
	};
}

