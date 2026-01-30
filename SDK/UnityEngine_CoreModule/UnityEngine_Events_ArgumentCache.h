#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Object; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_CoreModule::UnityEngine::Events
{
	struct ArgumentCache : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Object* m_ObjectArgument;
		mscorlib::System::String* m_ObjectArgumentAssemblyTypeName;
		int32_t m_IntArgument;
		float m_FloatArgument;
		mscorlib::System::String* m_StringArgument;
		bool m_BoolArgument;
		UnityEngine_CoreModule::UnityEngine::Object* get_unityObjectArgument();
		mscorlib::System::String* get_unityObjectArgumentAssemblyTypeName();
		int32_t get_intArgument();
		float get_floatArgument();
		mscorlib::System::String* get_stringArgument();
		bool get_boolArgument();
		void OnBeforeSerialize();
		void OnAfterDeserialize();
		void _ctor();
	};
}

