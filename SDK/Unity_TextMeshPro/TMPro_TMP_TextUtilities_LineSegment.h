#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "TMPro_TMP_TextUtilities.h"
namespace Unity_TextMeshPro::TMPro { struct TMP_TextUtilities; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_TextMeshPro::TMPro
{
	struct TMP_TextUtilities_LineSegment
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Vector3 Point1;
		UnityEngine_CoreModule::UnityEngine::Vector3 Point2;
		void _ctor(UnityEngine_CoreModule::UnityEngine::Vector3 p1, UnityEngine_CoreModule::UnityEngine::Vector3 p2);
	};
}

