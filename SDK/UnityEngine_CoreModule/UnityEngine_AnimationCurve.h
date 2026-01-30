#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "UnityEngine_Keyframe.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Keyframe; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "UnityEngine_WrapMode.h"
namespace mscorlib::System { struct Object; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct AnimationCurve : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		intptr_t m_Ptr;
		static void Internal_Destroy(intptr_t ptr);
		static intptr_t Internal_Create(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Keyframe>* keys);
		bool Internal_Equals(intptr_t other);
		void Finalize();
		float Evaluate(float time);
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Keyframe>* get_keys();
		void set_keys(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Keyframe>* value);
		int32_t AddKey(float time, float value);
		int32_t AddKey(UnityEngine_CoreModule::UnityEngine::Keyframe key);
		int32_t AddKey_Internal(UnityEngine_CoreModule::UnityEngine::Keyframe key);
		int32_t MoveKey(int32_t index, UnityEngine_CoreModule::UnityEngine::Keyframe key);
		void RemoveKey(int32_t index);
		UnityEngine_CoreModule::UnityEngine::Keyframe get_Item(int32_t index);
		int32_t get_length();
		void SetKeys(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Keyframe>* keys);
		UnityEngine_CoreModule::UnityEngine::Keyframe GetKey(int32_t index);
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Keyframe>* GetKeys();
		void SmoothTangents(int32_t index, float weight);
		static UnityEngine_CoreModule::UnityEngine::AnimationCurve* Linear(float timeStart, float valueStart, float timeEnd, float valueEnd);
		static UnityEngine_CoreModule::UnityEngine::AnimationCurve* EaseInOut(float timeStart, float valueStart, float timeEnd, float valueEnd);
		UnityEngine_CoreModule::UnityEngine::WrapMode get_preWrapMode();
		void set_preWrapMode(UnityEngine_CoreModule::UnityEngine::WrapMode value);
		UnityEngine_CoreModule::UnityEngine::WrapMode get_postWrapMode();
		void set_postWrapMode(UnityEngine_CoreModule::UnityEngine::WrapMode value);
		void _ctor(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Keyframe>* keys);
		void _ctor();
		bool Equals(mscorlib::System::Object* o);
		bool Equals(UnityEngine_CoreModule::UnityEngine::AnimationCurve* other);
		int32_t GetHashCode();
		int32_t AddKey_Internal_Injected(UnityEngine_CoreModule::UnityEngine::Keyframe& key);
		int32_t MoveKey_Injected(int32_t index, UnityEngine_CoreModule::UnityEngine::Keyframe& key);
		void GetKey_Injected(int32_t index, UnityEngine_CoreModule::UnityEngine::Keyframe& ret);
	};
}

