#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections { struct Hashtable; };
namespace mscorlib::System::Collections { struct IList; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Runtime::Remoting
{
	struct ProviderData : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* Ref;
		mscorlib::System::String* Type;
		mscorlib::System::String* Id;
		mscorlib::System::Collections::Hashtable* CustomProperties;
		mscorlib::System::Collections::IList* CustomData;
		void CopyFrom(mscorlib::System::Runtime::Remoting::ProviderData* other);
		void _ctor();
	};
}

