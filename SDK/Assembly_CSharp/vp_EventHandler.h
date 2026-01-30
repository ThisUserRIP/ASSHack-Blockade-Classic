#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp { struct vp_Event; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace mscorlib::System { struct Object; };
namespace Assembly_CSharp { struct vp_EventHandler_ScriptMethods; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Reflection { struct FieldInfo; };
namespace mscorlib::System::Reflection { struct MethodInfo; };

namespace Assembly_CSharp
{
	struct vp_EventHandler : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool m_Initialized;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, Assembly_CSharp::vp_Event>* m_EventsByCallback;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::vp_Event>* m_Events;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::Object>* m_PendingRegistrants;
		struct StaticFields
		{
			mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Type, Assembly_CSharp::vp_EventHandler_ScriptMethods>* m_StoredScriptTypes;
			IL2CPP::Array<mscorlib::System::String*>* m_SupportedPrefixes;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void Awake();
		void StoreHandlerEvents();
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::Reflection::FieldInfo>* GetFields();
		void Register(mscorlib::System::Object* target);
		void Unregister(mscorlib::System::Object* target);
		bool CompareMethodSignatures(mscorlib::System::Reflection::MethodInfo* scriptMethod, mscorlib::System::Type* handlerParameterType, mscorlib::System::Type* handlerReturnType);
		Assembly_CSharp::vp_EventHandler_ScriptMethods* GetScriptMethods(mscorlib::System::Object* target);
		void _ctor();
		static void _cctor();
	};
}

