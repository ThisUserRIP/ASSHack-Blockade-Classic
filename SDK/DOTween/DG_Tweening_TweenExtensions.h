#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace DOTween::DG::Tweening { struct Tween; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_CoreModule::UnityEngine { struct YieldInstruction; };
namespace UnityEngine_CoreModule::UnityEngine { struct Coroutine; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };

namespace DOTween::DG::Tweening
{
	struct TweenExtensions : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static void Complete(DOTween::DG::Tweening::Tween* t);
		static void Complete(DOTween::DG::Tweening::Tween* t, bool withCallbacks);
		static void Flip(DOTween::DG::Tweening::Tween* t);
		static void ForceInit(DOTween::DG::Tweening::Tween* t);
		static void Goto(DOTween::DG::Tweening::Tween* t, float to, bool andPlay);
		static void Kill(DOTween::DG::Tweening::Tween* t, bool complete);
		template <typename T> static T* Pause(T* t)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Pause", std::vector<std::string> { GetGenericTypeName<T>() });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)t;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<T>(returnValue);;
		}
		template <typename T> static T* Play(T* t)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Play", std::vector<std::string> { GetGenericTypeName<T>() });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)t;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<T>(returnValue);;
		}
		static void PlayBackwards(DOTween::DG::Tweening::Tween* t);
		static void PlayForward(DOTween::DG::Tweening::Tween* t);
		static void Restart(DOTween::DG::Tweening::Tween* t, bool includeDelay, float changeDelayTo);
		static void Rewind(DOTween::DG::Tweening::Tween* t, bool includeDelay);
		static void SmoothRewind(DOTween::DG::Tweening::Tween* t);
		static void TogglePause(DOTween::DG::Tweening::Tween* t);
		static void GotoWaypoint(DOTween::DG::Tweening::Tween* t, int32_t waypointIndex, bool andPlay);
		static UnityEngine_CoreModule::UnityEngine::YieldInstruction* WaitForCompletion(DOTween::DG::Tweening::Tween* t);
		static UnityEngine_CoreModule::UnityEngine::YieldInstruction* WaitForRewind(DOTween::DG::Tweening::Tween* t);
		static UnityEngine_CoreModule::UnityEngine::YieldInstruction* WaitForKill(DOTween::DG::Tweening::Tween* t);
		static UnityEngine_CoreModule::UnityEngine::YieldInstruction* WaitForElapsedLoops(DOTween::DG::Tweening::Tween* t, int32_t elapsedLoops);
		static UnityEngine_CoreModule::UnityEngine::YieldInstruction* WaitForPosition(DOTween::DG::Tweening::Tween* t, float position);
		static UnityEngine_CoreModule::UnityEngine::Coroutine* WaitForStart(DOTween::DG::Tweening::Tween* t);
		static int32_t CompletedLoops(DOTween::DG::Tweening::Tween* t);
		static float Delay(DOTween::DG::Tweening::Tween* t);
		static float Duration(DOTween::DG::Tweening::Tween* t, bool includeLoops);
		static float Elapsed(DOTween::DG::Tweening::Tween* t, bool includeLoops);
		static float ElapsedPercentage(DOTween::DG::Tweening::Tween* t, bool includeLoops);
		static float ElapsedDirectionalPercentage(DOTween::DG::Tweening::Tween* t);
		static bool IsActive(DOTween::DG::Tweening::Tween* t);
		static bool IsBackwards(DOTween::DG::Tweening::Tween* t);
		static bool IsComplete(DOTween::DG::Tweening::Tween* t);
		static bool IsInitialized(DOTween::DG::Tweening::Tween* t);
		static bool IsPlaying(DOTween::DG::Tweening::Tween* t);
		static int32_t Loops(DOTween::DG::Tweening::Tween* t);
		static UnityEngine_CoreModule::UnityEngine::Vector3 PathGetPoint(DOTween::DG::Tweening::Tween* t, float pathPercentage);
		static IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* PathGetDrawPoints(DOTween::DG::Tweening::Tween* t, int32_t subdivisionsXSegment);
		static float PathLength(DOTween::DG::Tweening::Tween* t);
	};
}

