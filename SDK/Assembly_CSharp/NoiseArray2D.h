#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp { struct PerlinNoise2D; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "Vector2i.h"
namespace Assembly_CSharp { struct Vector2i; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct NoiseArray2D : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::PerlinNoise2D* noise;
		IL2CPP::Array<float>* map;
		Assembly_CSharp::Vector2i offset;
		struct StaticFields
		{
			int32_t step;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(float scale);
		Assembly_CSharp::NoiseArray2D* SetPersistence(float persistence);
		Assembly_CSharp::NoiseArray2D* SetOctaves(int32_t octaves);
		void GenerateNoise(int32_t offsetX, int32_t offsetY);
		void GenerateNoise(Assembly_CSharp::Vector2i offset);
		float GetNoise(int32_t x, int32_t y);
	};
}

