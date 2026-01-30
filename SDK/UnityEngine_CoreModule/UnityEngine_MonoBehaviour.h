#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Behaviour.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace UnityEngine_CoreModule::UnityEngine { struct Coroutine; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Collections { struct IEnumerator; };
namespace UnityEngine_CoreModule::UnityEngine { struct Object; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct MonoBehaviour : UnityEngine_CoreModule::UnityEngine::Behaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool IsInvoking();
		void CancelInvoke();
		void Invoke(mscorlib::System::String* methodName, float time);
		void InvokeRepeating(mscorlib::System::String* methodName, float time, float repeatRate);
		void CancelInvoke(mscorlib::System::String* methodName);
		bool IsInvoking(mscorlib::System::String* methodName);
		UnityEngine_CoreModule::UnityEngine::Coroutine* StartCoroutine(mscorlib::System::String* methodName);
		UnityEngine_CoreModule::UnityEngine::Coroutine* StartCoroutine(mscorlib::System::String* methodName, mscorlib::System::Object* value);
		UnityEngine_CoreModule::UnityEngine::Coroutine* StartCoroutine(mscorlib::System::Collections::IEnumerator* routine);
		UnityEngine_CoreModule::UnityEngine::Coroutine* StartCoroutine_Auto(mscorlib::System::Collections::IEnumerator* routine);
		void StopCoroutine(mscorlib::System::Collections::IEnumerator* routine);
		void StopCoroutine(UnityEngine_CoreModule::UnityEngine::Coroutine* routine);
		void StopCoroutine(mscorlib::System::String* methodName);
		void StopAllCoroutines();
		bool get_useGUILayout();
		void set_useGUILayout(bool value);
		static void print(mscorlib::System::Object* message);
		static void Internal_CancelInvokeAll(UnityEngine_CoreModule::UnityEngine::MonoBehaviour* self);
		static bool Internal_IsInvokingAll(UnityEngine_CoreModule::UnityEngine::MonoBehaviour* self);
		static void InvokeDelayed(UnityEngine_CoreModule::UnityEngine::MonoBehaviour* self, mscorlib::System::String* methodName, float time, float repeatRate);
		static void CancelInvoke(UnityEngine_CoreModule::UnityEngine::MonoBehaviour* self, mscorlib::System::String* methodName);
		static bool IsInvoking(UnityEngine_CoreModule::UnityEngine::MonoBehaviour* self, mscorlib::System::String* methodName);
		static bool IsObjectMonoBehaviour(UnityEngine_CoreModule::UnityEngine::Object* obj);
		UnityEngine_CoreModule::UnityEngine::Coroutine* StartCoroutineManaged(mscorlib::System::String* methodName, mscorlib::System::Object* value);
		UnityEngine_CoreModule::UnityEngine::Coroutine* StartCoroutineManaged2(mscorlib::System::Collections::IEnumerator* enumerator);
		void StopCoroutineManaged(UnityEngine_CoreModule::UnityEngine::Coroutine* routine);
		void StopCoroutineFromEnumeratorManaged(mscorlib::System::Collections::IEnumerator* routine);
		mscorlib::System::String* GetScriptClassName();
		void _ctor();
	};
}

