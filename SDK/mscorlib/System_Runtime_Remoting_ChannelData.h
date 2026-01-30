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

namespace mscorlib::System::Runtime::Remoting
{
	struct ChannelData : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* Ref;
		mscorlib::System::String* Type;
		mscorlib::System::String* Id;
		mscorlib::System::String* DelayLoadAsClientChannel;
		mscorlib::System::Collections::ArrayList* _serverProviders;
		mscorlib::System::Collections::ArrayList* _clientProviders;
		mscorlib::System::Collections::Hashtable* _customProperties;
		mscorlib::System::Collections::ArrayList* get_ServerProviders();
		mscorlib::System::Collections::ArrayList* get_ClientProviders();
		mscorlib::System::Collections::Hashtable* get_CustomProperties();
		void CopyFrom(mscorlib::System::Runtime::Remoting::ChannelData* other);
		void _ctor();
	};
}

