#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace Unity_TextMeshPro::TMPro { struct TextMeshProUGUI; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
namespace UnityEngine_UI::UnityEngine::UI { struct Image; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Assembly_CSharp
{
	struct DamagePopup : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Unity_TextMeshPro::TMPro::TextMeshProUGUI* textMesh;
		UnityEngine_CoreModule::UnityEngine::Vector3 worldPoint;
		UnityEngine_CoreModule::UnityEngine::Color bodyColor;
		UnityEngine_CoreModule::UnityEngine::Color armorColor;
		UnityEngine_CoreModule::UnityEngine::Color headColor;
		UnityEngine_UI::UnityEngine::UI::Image* armorIcon;
		float createdTime;
		UnityEngine_CoreModule::UnityEngine::Transform* myTransform;
		UnityEngine_CoreModule::UnityEngine::Color tmpColor;
		void Awake();
		void Setup(UnityEngine_CoreModule::UnityEngine::Vector3 _pos, int32_t _damageAmount, int32_t _damageType, int32_t _damageHead, int32_t _damageArmor);
		void LateUpdate();
		void _ctor();
	};
}

