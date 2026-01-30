#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Doozy_Engine_Message.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace UnityEngine_CoreModule::UnityEngine { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "Doozy_Engine_SystemGameEvent.h"
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };

namespace Assembly_CSharp::Doozy::Engine
{
	struct GameEventMessage : Assembly_CSharp::Doozy::Engine::Message
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool _IsSystemEvent_k__BackingField;
		mscorlib::System::String* EventName;
		UnityEngine_CoreModule::UnityEngine::GameObject* Source;
		UnityEngine_CoreModule::UnityEngine::Object* CustomObject;
		struct StaticFields
		{
			mscorlib::System::String* NO_GAME_EVENT;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		bool get_HasCustomObject();
		bool get_HasGameEvent();
		bool get_HasSource();
		bool get_IsSystemEvent();
		void set_IsSystemEvent(bool value);
		void _ctor(Assembly_CSharp::Doozy::Engine::SystemGameEvent systemGameEvent);
		void _ctor(mscorlib::System::String* gameEvent);
		void _ctor(UnityEngine_CoreModule::UnityEngine::GameObject* source);
		void _ctor(Assembly_CSharp::Doozy::Engine::SystemGameEvent systemGameEvent, UnityEngine_CoreModule::UnityEngine::GameObject* source, UnityEngine_CoreModule::UnityEngine::Object* customObject);
		void _ctor(mscorlib::System::String* gameEvent, UnityEngine_CoreModule::UnityEngine::GameObject* source);
		void _ctor(UnityEngine_CoreModule::UnityEngine::GameObject* source, UnityEngine_CoreModule::UnityEngine::Object* customObject);
		void _ctor(mscorlib::System::String* gameEvent, UnityEngine_CoreModule::UnityEngine::Object* customObject);
		void _ctor(mscorlib::System::String* gameEvent, UnityEngine_CoreModule::UnityEngine::GameObject* source, UnityEngine_CoreModule::UnityEngine::Object* customObject);
		static void SendEvent(Assembly_CSharp::Doozy::Engine::SystemGameEvent systemGameEvent);
		static void SendEvent(mscorlib::System::String* gameEvent);
		static void SendEvent(UnityEngine_CoreModule::UnityEngine::GameObject* source);
		static void SendEvent(Assembly_CSharp::Doozy::Engine::SystemGameEvent systemGameEvent, UnityEngine_CoreModule::UnityEngine::GameObject* source);
		static void SendEvent(mscorlib::System::String* gameEvent, UnityEngine_CoreModule::UnityEngine::GameObject* source);
		static void SendEvent(mscorlib::System::String* gameEvent, UnityEngine_CoreModule::UnityEngine::Object* customObject);
		static void SendEvent(UnityEngine_CoreModule::UnityEngine::GameObject* source, UnityEngine_CoreModule::UnityEngine::Object* customObject);
		static void SendEvent(mscorlib::System::String* gameEvent, UnityEngine_CoreModule::UnityEngine::GameObject* source, UnityEngine_CoreModule::UnityEngine::Object* customObject);
		static void SendEvents(mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* gameEvents, UnityEngine_CoreModule::UnityEngine::GameObject* source, UnityEngine_CoreModule::UnityEngine::Object* customObject);
		static void SendEvent(Assembly_CSharp::Doozy::Engine::GameEventMessage* gameEventMessage);
	};
}

