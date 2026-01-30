#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace UnityEngine_UI::UnityEngine::UI { struct Image; };
namespace mscorlib::System { struct String; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Tayx::Graphy
{
	struct G_GraphShader : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t ArrayMaxSize;
		IL2CPP::Array<float>* Array;
		UnityEngine_UI::UnityEngine::UI::Image* Image;
		mscorlib::System::String* Name;
		mscorlib::System::String* Name_Length;
		float Average;
		int32_t averagePropertyId;
		float GoodThreshold;
		float CautionThreshold;
		int32_t goodThresholdPropertyId;
		int32_t cautionThresholdPropertyId;
		UnityEngine_CoreModule::UnityEngine::Color GoodColor;
		UnityEngine_CoreModule::UnityEngine::Color CautionColor;
		UnityEngine_CoreModule::UnityEngine::Color CriticalColor;
		int32_t goodColorPropertyId;
		int32_t cautionColorPropertyId;
		int32_t criticalColorPropertyId;
		struct StaticFields
		{
			int32_t ArrayMaxSizeFull;
			int32_t ArrayMaxSizeLight;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void InitializeShader();
		void UpdateArray();
		void UpdateAverage();
		void UpdateThresholds();
		void UpdateColors();
		void UpdatePoints();
		void _ctor();
	};
}

