#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "UnityEngine_Animations_TransformStreamHandle.h"
namespace UnityEngine_AnimationModule::UnityEngine::Animations { struct TransformStreamHandle; };
namespace UnityEngine_AnimationModule::UnityEngine { struct Animator; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "UnityEngine_Animations_TransformSceneHandle.h"
namespace UnityEngine_AnimationModule::UnityEngine::Animations { struct TransformSceneHandle; };
#include "UnityEngine_Animations_PropertySceneHandle.h"
namespace UnityEngine_AnimationModule::UnityEngine::Animations { struct PropertySceneHandle; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_AnimationModule::UnityEngine::Animations
{
	struct AnimatorJobExtensions : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static UnityEngine_AnimationModule::UnityEngine::Animations::TransformStreamHandle BindStreamTransform(UnityEngine_AnimationModule::UnityEngine::Animator* animator, UnityEngine_CoreModule::UnityEngine::Transform* transform);
		static UnityEngine_AnimationModule::UnityEngine::Animations::TransformSceneHandle BindSceneTransform(UnityEngine_AnimationModule::UnityEngine::Animator* animator, UnityEngine_CoreModule::UnityEngine::Transform* transform);
		static UnityEngine_AnimationModule::UnityEngine::Animations::PropertySceneHandle BindSceneProperty(UnityEngine_AnimationModule::UnityEngine::Animator* animator, UnityEngine_CoreModule::UnityEngine::Transform* transform, mscorlib::System::Type* type, mscorlib::System::String* property);
		static UnityEngine_AnimationModule::UnityEngine::Animations::PropertySceneHandle BindSceneProperty(UnityEngine_AnimationModule::UnityEngine::Animator* animator, UnityEngine_CoreModule::UnityEngine::Transform* transform, mscorlib::System::Type* type, mscorlib::System::String* property, bool isObjectReference);
		static void InternalBindStreamTransform(UnityEngine_AnimationModule::UnityEngine::Animator* animator, UnityEngine_CoreModule::UnityEngine::Transform* transform, UnityEngine_AnimationModule::UnityEngine::Animations::TransformStreamHandle& transformStreamHandle);
		static void InternalBindSceneTransform(UnityEngine_AnimationModule::UnityEngine::Animator* animator, UnityEngine_CoreModule::UnityEngine::Transform* transform, UnityEngine_AnimationModule::UnityEngine::Animations::TransformSceneHandle& transformSceneHandle);
		static void InternalBindSceneProperty(UnityEngine_AnimationModule::UnityEngine::Animator* animator, UnityEngine_CoreModule::UnityEngine::Transform* transform, mscorlib::System::Type* type, mscorlib::System::String* property, bool isObjectReference, UnityEngine_AnimationModule::UnityEngine::Animations::PropertySceneHandle& propertySceneHandle);
	};
}

