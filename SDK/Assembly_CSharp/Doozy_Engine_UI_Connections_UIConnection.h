#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace mscorlib::System { struct String; };
#include "Doozy_Engine_UI_Connections_UIConnectionTrigger.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::Doozy::Engine::Nody::Models { struct Socket; };

namespace Assembly_CSharp::Doozy::Engine::UI::Connections
{
	struct UIConnection : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* ButtonCategory;
		mscorlib::System::String* ButtonName;
		mscorlib::System::String* GameEvent;
		float TimeDelay;
		Assembly_CSharp::Doozy::Engine::UI::Connections::UIConnectionTrigger Trigger;
		struct StaticFields
		{
			float DEFAULT_TIME_DELAY;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void Reset();
		static Assembly_CSharp::Doozy::Engine::UI::Connections::UIConnection* GetValue(Assembly_CSharp::Doozy::Engine::Nody::Models::Socket* socket);
		static void SetValue(Assembly_CSharp::Doozy::Engine::Nody::Models::Socket* socket, Assembly_CSharp::Doozy::Engine::UI::Connections::UIConnection* value);
		void _ctor();
	};
}

