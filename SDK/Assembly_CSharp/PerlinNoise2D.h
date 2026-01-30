#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct PerlinNoise2D : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float scale;
		UnityEngine_CoreModule::UnityEngine::Vector2 offset;
		float persistence;
		int32_t octaves;
		void _ctor(float scale);
		Assembly_CSharp::PerlinNoise2D* SetPersistence(float persistence);
		Assembly_CSharp::PerlinNoise2D* SetOctaves(int32_t octaves);
		float Noise(float x, float y);
	};
}

