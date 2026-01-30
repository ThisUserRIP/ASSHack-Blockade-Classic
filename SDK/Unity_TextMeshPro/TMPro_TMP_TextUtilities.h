#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Unity_TextMeshPro::TMPro { struct TMP_Text; };
namespace UnityEngine_CoreModule::UnityEngine { struct Camera; };
#include "TMPro_CaretPosition.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_CoreModule::UnityEngine { struct RectTransform; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "TMPro_TMP_TextUtilities_LineSegment.h"
namespace Unity_TextMeshPro::TMPro { struct TMP_TextUtilities_LineSegment; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_TextMeshPro::TMPro
{
	struct TMP_TextUtilities : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* m_rectWorldCorners;
			mscorlib::System::String* k_lookupStringL;
			mscorlib::System::String* k_lookupStringU;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static int32_t GetCursorIndexFromPosition(Unity_TextMeshPro::TMPro::TMP_Text* textComponent, UnityEngine_CoreModule::UnityEngine::Vector3 position, UnityEngine_CoreModule::UnityEngine::Camera* camera);
		static int32_t GetCursorIndexFromPosition(Unity_TextMeshPro::TMPro::TMP_Text* textComponent, UnityEngine_CoreModule::UnityEngine::Vector3 position, UnityEngine_CoreModule::UnityEngine::Camera* camera, Unity_TextMeshPro::TMPro::CaretPosition& cursor);
		static int32_t FindNearestLine(Unity_TextMeshPro::TMPro::TMP_Text* text, UnityEngine_CoreModule::UnityEngine::Vector3 position, UnityEngine_CoreModule::UnityEngine::Camera* camera);
		static int32_t FindNearestCharacterOnLine(Unity_TextMeshPro::TMPro::TMP_Text* text, UnityEngine_CoreModule::UnityEngine::Vector3 position, int32_t line, UnityEngine_CoreModule::UnityEngine::Camera* camera, bool visibleOnly);
		static bool IsIntersectingRectTransform(UnityEngine_CoreModule::UnityEngine::RectTransform* rectTransform, UnityEngine_CoreModule::UnityEngine::Vector3 position, UnityEngine_CoreModule::UnityEngine::Camera* camera);
		static int32_t FindIntersectingCharacter(Unity_TextMeshPro::TMPro::TMP_Text* text, UnityEngine_CoreModule::UnityEngine::Vector3 position, UnityEngine_CoreModule::UnityEngine::Camera* camera, bool visibleOnly);
		static int32_t FindNearestCharacter(Unity_TextMeshPro::TMPro::TMP_Text* text, UnityEngine_CoreModule::UnityEngine::Vector3 position, UnityEngine_CoreModule::UnityEngine::Camera* camera, bool visibleOnly);
		static int32_t FindIntersectingWord(Unity_TextMeshPro::TMPro::TMP_Text* text, UnityEngine_CoreModule::UnityEngine::Vector3 position, UnityEngine_CoreModule::UnityEngine::Camera* camera);
		static int32_t FindNearestWord(Unity_TextMeshPro::TMPro::TMP_Text* text, UnityEngine_CoreModule::UnityEngine::Vector3 position, UnityEngine_CoreModule::UnityEngine::Camera* camera);
		static int32_t FindIntersectingLine(Unity_TextMeshPro::TMPro::TMP_Text* text, UnityEngine_CoreModule::UnityEngine::Vector3 position, UnityEngine_CoreModule::UnityEngine::Camera* camera);
		static int32_t FindIntersectingLink(Unity_TextMeshPro::TMPro::TMP_Text* text, UnityEngine_CoreModule::UnityEngine::Vector3 position, UnityEngine_CoreModule::UnityEngine::Camera* camera);
		static int32_t FindNearestLink(Unity_TextMeshPro::TMPro::TMP_Text* text, UnityEngine_CoreModule::UnityEngine::Vector3 position, UnityEngine_CoreModule::UnityEngine::Camera* camera);
		static bool PointIntersectRectangle(UnityEngine_CoreModule::UnityEngine::Vector3 m, UnityEngine_CoreModule::UnityEngine::Vector3 a, UnityEngine_CoreModule::UnityEngine::Vector3 b, UnityEngine_CoreModule::UnityEngine::Vector3 c, UnityEngine_CoreModule::UnityEngine::Vector3 d);
		static bool ScreenPointToWorldPointInRectangle(UnityEngine_CoreModule::UnityEngine::Transform* transform, UnityEngine_CoreModule::UnityEngine::Vector2 screenPoint, UnityEngine_CoreModule::UnityEngine::Camera* cam, UnityEngine_CoreModule::UnityEngine::Vector3& worldPoint);
		static bool IntersectLinePlane(Unity_TextMeshPro::TMPro::TMP_TextUtilities_LineSegment line, UnityEngine_CoreModule::UnityEngine::Vector3 point, UnityEngine_CoreModule::UnityEngine::Vector3 normal, UnityEngine_CoreModule::UnityEngine::Vector3& intersectingPoint);
		static float DistanceToLine(UnityEngine_CoreModule::UnityEngine::Vector3 a, UnityEngine_CoreModule::UnityEngine::Vector3 b, UnityEngine_CoreModule::UnityEngine::Vector3 point);
		static wchar_t ToLowerFast(wchar_t c);
		static wchar_t ToUpperFast(wchar_t c);
		static uint32_t ToUpperASCIIFast(uint32_t c);
		static int32_t GetHashCode(mscorlib::System::String* s);
		static int32_t GetSimpleHashCode(mscorlib::System::String* s);
		static uint32_t GetSimpleHashCodeLowercase(mscorlib::System::String* s);
		static int32_t HexToInt(wchar_t hex);
		static int32_t StringHexToInt(mscorlib::System::String* s);
		static void _cctor();
	};
}

