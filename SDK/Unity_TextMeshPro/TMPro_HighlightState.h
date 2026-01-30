#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color32.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color32; };
#include "TMPro_TMP_Offset.h"
namespace Unity_TextMeshPro::TMPro { struct TMP_Offset; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Object; };

namespace Unity_TextMeshPro::TMPro
{
	struct HighlightState
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Color32 color;
		Unity_TextMeshPro::TMPro::TMP_Offset padding;
		void _ctor(UnityEngine_CoreModule::UnityEngine::Color32 color, Unity_TextMeshPro::TMPro::TMP_Offset padding);
		static bool op_Equality(Unity_TextMeshPro::TMPro::HighlightState lhs, Unity_TextMeshPro::TMPro::HighlightState rhs);
		static bool op_Inequality(Unity_TextMeshPro::TMPro::HighlightState lhs, Unity_TextMeshPro::TMPro::HighlightState rhs);
		int32_t GetHashCode();
		bool Equals(mscorlib::System::Object* obj);
		bool Equals(Unity_TextMeshPro::TMPro::HighlightState other);
	};
	bool operator==(Unity_TextMeshPro::TMPro::HighlightState& lhs, Unity_TextMeshPro::TMPro::HighlightState& rhs);
	bool operator!=(Unity_TextMeshPro::TMPro::HighlightState& lhs, Unity_TextMeshPro::TMPro::HighlightState& rhs);
}

