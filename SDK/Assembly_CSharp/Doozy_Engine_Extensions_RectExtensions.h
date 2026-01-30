#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Doozy::Engine::Extensions
{
	struct RectExtensions : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			UnityEngine_CoreModule::UnityEngine::Vector2 s_tmpTopLeft;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static UnityEngine_CoreModule::UnityEngine::Vector2 TopLeft(UnityEngine_CoreModule::UnityEngine::Rect rect);
		static UnityEngine_CoreModule::UnityEngine::Rect ScaleSizeBy(UnityEngine_CoreModule::UnityEngine::Rect rect, float scale);
		static UnityEngine_CoreModule::UnityEngine::Rect ScaleSizeBy(UnityEngine_CoreModule::UnityEngine::Rect rect, float scale, UnityEngine_CoreModule::UnityEngine::Vector2 pivotPoint);
		static UnityEngine_CoreModule::UnityEngine::Rect ScaleSizeBy(UnityEngine_CoreModule::UnityEngine::Rect rect, UnityEngine_CoreModule::UnityEngine::Vector2 scale);
		static UnityEngine_CoreModule::UnityEngine::Rect ScaleSizeBy(UnityEngine_CoreModule::UnityEngine::Rect rect, UnityEngine_CoreModule::UnityEngine::Vector2 scale, UnityEngine_CoreModule::UnityEngine::Vector2 pivotPoint);
		static UnityEngine_CoreModule::UnityEngine::Rect Below(UnityEngine_CoreModule::UnityEngine::Rect source, UnityEngine_CoreModule::UnityEngine::Rect belowSource);
		static UnityEngine_CoreModule::UnityEngine::Rect RightOf(UnityEngine_CoreModule::UnityEngine::Rect source, UnityEngine_CoreModule::UnityEngine::Rect target);
		static UnityEngine_CoreModule::UnityEngine::Rect WithSize(UnityEngine_CoreModule::UnityEngine::Rect source, float width, float height);
		static UnityEngine_CoreModule::UnityEngine::Rect WithWidth(UnityEngine_CoreModule::UnityEngine::Rect source, float width);
		static UnityEngine_CoreModule::UnityEngine::Rect WithHeight(UnityEngine_CoreModule::UnityEngine::Rect source, float height);
		static UnityEngine_CoreModule::UnityEngine::Rect Pad(UnityEngine_CoreModule::UnityEngine::Rect source, float left, float top, float right, float bottom);
		static UnityEngine_CoreModule::UnityEngine::Rect PadSides(UnityEngine_CoreModule::UnityEngine::Rect source, float padding);
		static UnityEngine_CoreModule::UnityEngine::Rect AlignTopRight(UnityEngine_CoreModule::UnityEngine::Rect source, UnityEngine_CoreModule::UnityEngine::Rect target);
		static UnityEngine_CoreModule::UnityEngine::Rect AlignHorizontallyByCenter(UnityEngine_CoreModule::UnityEngine::Rect source, UnityEngine_CoreModule::UnityEngine::Rect target);
		static UnityEngine_CoreModule::UnityEngine::Rect AlignVerticallyByCenter(UnityEngine_CoreModule::UnityEngine::Rect source, UnityEngine_CoreModule::UnityEngine::Rect target);
		static UnityEngine_CoreModule::UnityEngine::Rect Translate(UnityEngine_CoreModule::UnityEngine::Rect source, float x, float y);
		static UnityEngine_CoreModule::UnityEngine::Rect WithOrigin(UnityEngine_CoreModule::UnityEngine::Rect source, float x, float y);
		static UnityEngine_CoreModule::UnityEngine::Rect Align(UnityEngine_CoreModule::UnityEngine::Rect source, UnityEngine_CoreModule::UnityEngine::Rect target);
		static UnityEngine_CoreModule::UnityEngine::Rect AlignAndScale(UnityEngine_CoreModule::UnityEngine::Rect source, UnityEngine_CoreModule::UnityEngine::Rect target);
		static UnityEngine_CoreModule::UnityEngine::Rect AlignHorizontally(UnityEngine_CoreModule::UnityEngine::Rect source, UnityEngine_CoreModule::UnityEngine::Rect target);
		static UnityEngine_CoreModule::UnityEngine::Rect AlignVertically(UnityEngine_CoreModule::UnityEngine::Rect source, UnityEngine_CoreModule::UnityEngine::Rect target);
		static UnityEngine_CoreModule::UnityEngine::Rect CenterInsideOf(UnityEngine_CoreModule::UnityEngine::Rect source, UnityEngine_CoreModule::UnityEngine::Rect target);
		static UnityEngine_CoreModule::UnityEngine::Rect LeftHalf(UnityEngine_CoreModule::UnityEngine::Rect source);
		static UnityEngine_CoreModule::UnityEngine::Rect RightHalf(UnityEngine_CoreModule::UnityEngine::Rect source);
		static UnityEngine_CoreModule::UnityEngine::Rect TopHalf(UnityEngine_CoreModule::UnityEngine::Rect source);
		static UnityEngine_CoreModule::UnityEngine::Rect BottomHalf(UnityEngine_CoreModule::UnityEngine::Rect source);
		static UnityEngine_CoreModule::UnityEngine::Rect Clip(UnityEngine_CoreModule::UnityEngine::Rect source, UnityEngine_CoreModule::UnityEngine::Rect target);
		static UnityEngine_CoreModule::UnityEngine::Rect InnerAlignWithBottomRight(UnityEngine_CoreModule::UnityEngine::Rect source, UnityEngine_CoreModule::UnityEngine::Rect target);
		static UnityEngine_CoreModule::UnityEngine::Rect InnerAlignWithCenterRight(UnityEngine_CoreModule::UnityEngine::Rect source, UnityEngine_CoreModule::UnityEngine::Rect target);
		static UnityEngine_CoreModule::UnityEngine::Rect InnerAlignWithCenterLeft(UnityEngine_CoreModule::UnityEngine::Rect source, UnityEngine_CoreModule::UnityEngine::Rect target);
		static UnityEngine_CoreModule::UnityEngine::Rect InnerAlignWithBottomLeft(UnityEngine_CoreModule::UnityEngine::Rect source, UnityEngine_CoreModule::UnityEngine::Rect target);
		static UnityEngine_CoreModule::UnityEngine::Rect InnerAlignWithUpperRight(UnityEngine_CoreModule::UnityEngine::Rect source, UnityEngine_CoreModule::UnityEngine::Rect target);
		static UnityEngine_CoreModule::UnityEngine::Rect InnerAlignWithBottomCenter(UnityEngine_CoreModule::UnityEngine::Rect source, UnityEngine_CoreModule::UnityEngine::Rect target);
		static UnityEngine_CoreModule::UnityEngine::Rect LeftOf(UnityEngine_CoreModule::UnityEngine::Rect source, UnityEngine_CoreModule::UnityEngine::Rect target);
		static UnityEngine_CoreModule::UnityEngine::Rect Above(UnityEngine_CoreModule::UnityEngine::Rect source, UnityEngine_CoreModule::UnityEngine::Rect target);
		static UnityEngine_CoreModule::UnityEngine::Rect AboveAll(UnityEngine_CoreModule::UnityEngine::Rect source, UnityEngine_CoreModule::UnityEngine::Rect target, int32_t i);
		static UnityEngine_CoreModule::UnityEngine::Rect Cover(UnityEngine_CoreModule::UnityEngine::Rect source, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rect>* targets);
		static UnityEngine_CoreModule::UnityEngine::Rect StretchedVerticallyAlong(UnityEngine_CoreModule::UnityEngine::Rect source, UnityEngine_CoreModule::UnityEngine::Rect target);
		static UnityEngine_CoreModule::UnityEngine::Rect AddHeight(UnityEngine_CoreModule::UnityEngine::Rect source, int32_t height);
		static UnityEngine_CoreModule::UnityEngine::Rect AddWidth(UnityEngine_CoreModule::UnityEngine::Rect source, int32_t width);
		static void _cctor();
	};
}

