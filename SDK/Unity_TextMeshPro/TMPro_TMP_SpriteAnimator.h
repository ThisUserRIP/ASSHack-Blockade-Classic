#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
namespace Unity_TextMeshPro::TMPro { struct TMP_Text; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Unity_TextMeshPro::TMPro { struct TMP_SpriteAsset; };
namespace mscorlib::System::Collections { struct IEnumerator; };

namespace Unity_TextMeshPro::TMPro
{
	struct TMP_SpriteAnimator : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, mscorlib::System::Boolean>* m_animations;
		Unity_TextMeshPro::TMPro::TMP_Text* m_TextComponent;
		void Awake();
		void OnEnable();
		void OnDisable();
		void StopAllAnimations();
		void DoSpriteAnimation(int32_t currentCharacter, Unity_TextMeshPro::TMPro::TMP_SpriteAsset* spriteAsset, int32_t start, int32_t end, int32_t framerate);
		mscorlib::System::Collections::IEnumerator* DoSpriteAnimationInternal(int32_t currentCharacter, Unity_TextMeshPro::TMPro::TMP_SpriteAsset* spriteAsset, int32_t start, int32_t end, int32_t framerate);
		void _ctor();
	};
}

