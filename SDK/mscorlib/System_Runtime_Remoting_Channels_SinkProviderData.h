#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections { struct ArrayList; };
namespace mscorlib::System::Collections { struct Hashtable; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Collections { struct IList; };
namespace mscorlib::System::Collections { struct IDictionary; };

namespace mscorlib::System::Runtime::Remoting::Channels
{
	struct SinkProviderData : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* sinkName;
		mscorlib::System::Collections::ArrayList* children;
		mscorlib::System::Collections::Hashtable* properties;
		void _ctor(mscorlib::System::String* name);
		mscorlib::System::Collections::IList* get_Children();
		mscorlib::System::Collections::IDictionary* get_Properties();
	};
}

