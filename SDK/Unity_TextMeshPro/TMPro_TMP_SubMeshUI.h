#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_UI\UnityEngine_UI_MaskableGraphic.h"
namespace Unity_TextMeshPro::TMPro { struct TMP_FontAsset; };
namespace Unity_TextMeshPro::TMPro { struct TMP_SpriteAsset; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace UnityEngine_CoreModule::UnityEngine { struct Mesh; };
namespace Unity_TextMeshPro::TMPro { struct TextMeshProUGUI; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture; };
namespace Unity_TextMeshPro::TMPro { struct TMP_Text; };
#include "TMPro_MaterialReference.h"
namespace Unity_TextMeshPro::TMPro { struct MaterialReference; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };
#include "..\UnityEngine_UI\UnityEngine_UI_CanvasUpdate.h"

namespace Unity_TextMeshPro::TMPro
{
	struct TMP_SubMeshUI : UnityEngine_UI::UnityEngine::UI::MaskableGraphic
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Unity_TextMeshPro::TMPro::TMP_FontAsset* m_fontAsset;
		Unity_TextMeshPro::TMPro::TMP_SpriteAsset* m_spriteAsset;
		UnityEngine_CoreModule::UnityEngine::Material* m_material;
		UnityEngine_CoreModule::UnityEngine::Material* m_sharedMaterial;
		UnityEngine_CoreModule::UnityEngine::Material* m_fallbackMaterial;
		UnityEngine_CoreModule::UnityEngine::Material* m_fallbackSourceMaterial;
		bool m_isDefaultMaterial;
		float m_padding;
		UnityEngine_CoreModule::UnityEngine::Mesh* m_mesh;
		Unity_TextMeshPro::TMPro::TextMeshProUGUI* m_TextComponent;
		bool m_isRegisteredForEvents;
		bool m_materialDirty;
		int32_t m_materialReferenceIndex;
		UnityEngine_CoreModule::UnityEngine::Transform* m_RootCanvasTransform;
		Unity_TextMeshPro::TMPro::TMP_FontAsset* get_fontAsset();
		void set_fontAsset(Unity_TextMeshPro::TMPro::TMP_FontAsset* value);
		Unity_TextMeshPro::TMPro::TMP_SpriteAsset* get_spriteAsset();
		void set_spriteAsset(Unity_TextMeshPro::TMPro::TMP_SpriteAsset* value);
		UnityEngine_CoreModule::UnityEngine::Texture* get_mainTexture();
		UnityEngine_CoreModule::UnityEngine::Material* get_material();
		void set_material(UnityEngine_CoreModule::UnityEngine::Material* value);
		UnityEngine_CoreModule::UnityEngine::Material* get_sharedMaterial();
		void set_sharedMaterial(UnityEngine_CoreModule::UnityEngine::Material* value);
		UnityEngine_CoreModule::UnityEngine::Material* get_fallbackMaterial();
		void set_fallbackMaterial(UnityEngine_CoreModule::UnityEngine::Material* value);
		UnityEngine_CoreModule::UnityEngine::Material* get_fallbackSourceMaterial();
		void set_fallbackSourceMaterial(UnityEngine_CoreModule::UnityEngine::Material* value);
		UnityEngine_CoreModule::UnityEngine::Material* get_materialForRendering();
		bool get_isDefaultMaterial();
		void set_isDefaultMaterial(bool value);
		float get_padding();
		void set_padding(float value);
		UnityEngine_CoreModule::UnityEngine::Mesh* get_mesh();
		void set_mesh(UnityEngine_CoreModule::UnityEngine::Mesh* value);
		Unity_TextMeshPro::TMPro::TMP_Text* get_textComponent();
		static Unity_TextMeshPro::TMPro::TMP_SubMeshUI* AddSubTextObject(Unity_TextMeshPro::TMPro::TextMeshProUGUI* textComponent, Unity_TextMeshPro::TMPro::MaterialReference materialReference);
		void OnEnable();
		void OnDisable();
		void OnDestroy();
		void OnTransformParentChanged();
		UnityEngine_CoreModule::UnityEngine::Material* GetModifiedMaterial(UnityEngine_CoreModule::UnityEngine::Material* baseMaterial);
		float GetPaddingForMaterial();
		float GetPaddingForMaterial(UnityEngine_CoreModule::UnityEngine::Material* mat);
		void UpdateMeshPadding(bool isExtraPadding, bool isUsingBold);
		void SetAllDirty();
		void SetVerticesDirty();
		void SetLayoutDirty();
		void SetMaterialDirty();
		void SetPivotDirty();
		UnityEngine_CoreModule::UnityEngine::Transform* GetRootCanvasTransform();
		void Cull(UnityEngine_CoreModule::UnityEngine::Rect clipRect, bool validRect);
		void UpdateGeometry();
		void Rebuild(UnityEngine_UI::UnityEngine::UI::CanvasUpdate update);
		void RefreshMaterial();
		void UpdateMaterial();
		void RecalculateClipping();
		UnityEngine_CoreModule::UnityEngine::Material* GetMaterial();
		UnityEngine_CoreModule::UnityEngine::Material* GetMaterial(UnityEngine_CoreModule::UnityEngine::Material* mat);
		UnityEngine_CoreModule::UnityEngine::Material* CreateMaterialInstance(UnityEngine_CoreModule::UnityEngine::Material* source);
		UnityEngine_CoreModule::UnityEngine::Material* GetSharedMaterial();
		void SetSharedMaterial(UnityEngine_CoreModule::UnityEngine::Material* mat);
		void _ctor();
	};
}

