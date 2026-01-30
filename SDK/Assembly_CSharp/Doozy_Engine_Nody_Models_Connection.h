#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::Doozy::Engine::Nody::Models { struct Socket; };

namespace Assembly_CSharp::Doozy::Engine::Nody::Models
{
	struct Connection : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool _Ping_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::Vector2 m_inputConnectionPoint;
		UnityEngine_CoreModule::UnityEngine::Vector2 m_outputConnectionPoint;
		mscorlib::System::String* m_id;
		mscorlib::System::String* m_inputNodeId;
		mscorlib::System::String* m_inputSocketId;
		mscorlib::System::String* m_outputNodeId;
		mscorlib::System::String* m_outputSocketId;
		bool get_Ping();
		void set_Ping(bool value);
		mscorlib::System::String* get_Id();
		void set_Id(mscorlib::System::String* value);
		mscorlib::System::String* get_InputNodeId();
		void set_InputNodeId(mscorlib::System::String* value);
		mscorlib::System::String* get_InputSocketId();
		void set_InputSocketId(mscorlib::System::String* value);
		mscorlib::System::String* get_OutputNodeId();
		void set_OutputNodeId(mscorlib::System::String* value);
		mscorlib::System::String* get_OutputSocketId();
		void set_OutputSocketId(mscorlib::System::String* value);
		UnityEngine_CoreModule::UnityEngine::Vector2 get_InputConnectionPoint();
		void set_InputConnectionPoint(UnityEngine_CoreModule::UnityEngine::Vector2 value);
		UnityEngine_CoreModule::UnityEngine::Vector2 get_OutputConnectionPoint();
		void set_OutputConnectionPoint(UnityEngine_CoreModule::UnityEngine::Vector2 value);
		void _ctor(Assembly_CSharp::Doozy::Engine::Nody::Models::Socket* socket1, Assembly_CSharp::Doozy::Engine::Nody::Models::Socket* socket2);
		void _ctor(Assembly_CSharp::Doozy::Engine::Nody::Models::Connection* other);
		mscorlib::System::String* GenerateNewId();
	};
}

