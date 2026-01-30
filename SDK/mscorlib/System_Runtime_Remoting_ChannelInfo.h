#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct Object; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Runtime::Remoting
{
	struct ChannelInfo : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<mscorlib::System::Object*>* channelData;
		void _ctor();
		void _ctor(mscorlib::System::Object* remoteChannelData);
		IL2CPP::Array<mscorlib::System::Object*>* get_ChannelData();
	};
}

