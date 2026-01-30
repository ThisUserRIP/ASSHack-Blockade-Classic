#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Doozy_Engine_Nody_Nodes_SwitchBackNode.h"
namespace Assembly_CSharp::Doozy::Engine::Nody::Nodes { struct SwitchBackNode; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Doozy::Engine::Nody::Nodes
{
	struct SwitchBackNode_SourceInfo : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* SourceName;
		mscorlib::System::String* InputSocketId;
		mscorlib::System::String* OutputSocketId;
		bool InputSocketIsConnected;
		bool OutputSocketIsConnected;
		bool get_IsConnected();
		void _ctor(mscorlib::System::String* sourceName, mscorlib::System::String* inputSocketId, mscorlib::System::String* outputSocketId);
	};
}

