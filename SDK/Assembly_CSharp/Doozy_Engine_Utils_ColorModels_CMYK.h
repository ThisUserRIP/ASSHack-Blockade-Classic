#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
namespace Assembly_CSharp::Doozy::Engine::Utils::ColorModels { struct RGB; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector4; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Assembly_CSharp::Doozy::Engine::Utils::ColorModels
{
	struct CMYK : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float c;
		float m;
		float y;
		float k;
		void _ctor(float C, float M, float Y, float K);
		Assembly_CSharp::Doozy::Engine::Utils::ColorModels::CMYK* Copy();
		UnityEngine_CoreModule::UnityEngine::Color Color(float alpha);
		Assembly_CSharp::Doozy::Engine::Utils::ColorModels::RGB* ToRGB();
		Assembly_CSharp::Doozy::Engine::Utils::ColorModels::CMYK* Validate();
		float ValidateColor(float value, float min, float max);
		UnityEngine_CoreModule::UnityEngine::Vector4 Factorize();
		int32_t FactorizeColor(float value, float min, float max, float f);
		mscorlib::System::String* ToString(bool factorize);
	};
}

