#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_UI\UnityEngine_EventSystems_UIBehaviour.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "TMPro_TextContainerAnchors.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector4; };
namespace UnityEngine_CoreModule::UnityEngine { struct RectTransform; };
namespace Unity_TextMeshPro::TMPro { struct TextMeshPro; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };

namespace Unity_TextMeshPro::TMPro
{
	struct TextContainer : UnityEngine_UI::UnityEngine::EventSystems::UIBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool m_hasChanged;
		UnityEngine_CoreModule::UnityEngine::Vector2 m_pivot;
		Unity_TextMeshPro::TMPro::TextContainerAnchors m_anchorPosition;
		UnityEngine_CoreModule::UnityEngine::Rect m_rect;
		bool m_isDefaultWidth;
		bool m_isDefaultHeight;
		bool m_isAutoFitting;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* m_corners;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* m_worldCorners;
		UnityEngine_CoreModule::UnityEngine::Vector4 m_margins;
		UnityEngine_CoreModule::UnityEngine::RectTransform* m_rectTransform;
		Unity_TextMeshPro::TMPro::TextMeshPro* m_textMeshPro;
		struct StaticFields
		{
			UnityEngine_CoreModule::UnityEngine::Vector2 k_defaultSize;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		bool get_hasChanged();
		void set_hasChanged(bool value);
		UnityEngine_CoreModule::UnityEngine::Vector2 get_pivot();
		void set_pivot(UnityEngine_CoreModule::UnityEngine::Vector2 value);
		Unity_TextMeshPro::TMPro::TextContainerAnchors get_anchorPosition();
		void set_anchorPosition(Unity_TextMeshPro::TMPro::TextContainerAnchors value);
		UnityEngine_CoreModule::UnityEngine::Rect get_rect();
		void set_rect(UnityEngine_CoreModule::UnityEngine::Rect value);
		UnityEngine_CoreModule::UnityEngine::Vector2 get_size();
		void set_size(UnityEngine_CoreModule::UnityEngine::Vector2 value);
		float get_width();
		void set_width(float value);
		float get_height();
		void set_height(float value);
		bool get_isDefaultWidth();
		bool get_isDefaultHeight();
		bool get_isAutoFitting();
		void set_isAutoFitting(bool value);
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* get_corners();
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* get_worldCorners();
		UnityEngine_CoreModule::UnityEngine::Vector4 get_margins();
		void set_margins(UnityEngine_CoreModule::UnityEngine::Vector4 value);
		UnityEngine_CoreModule::UnityEngine::RectTransform* get_rectTransform();
		Unity_TextMeshPro::TMPro::TextMeshPro* get_textMeshPro();
		void Awake();
		void OnEnable();
		void OnDisable();
		void OnContainerChanged();
		void OnRectTransformDimensionsChange();
		void SetRect(UnityEngine_CoreModule::UnityEngine::Vector2 size);
		void UpdateCorners();
		UnityEngine_CoreModule::UnityEngine::Vector2 GetPivot(Unity_TextMeshPro::TMPro::TextContainerAnchors anchor);
		Unity_TextMeshPro::TMPro::TextContainerAnchors GetAnchorPosition(UnityEngine_CoreModule::UnityEngine::Vector2 pivot);
		void _ctor();
		static void _cctor();
	};
}

