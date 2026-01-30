#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Assembly_CSharp { struct Map; };
namespace Assembly_CSharp { struct Block; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "Vector3i.h"
namespace Assembly_CSharp { struct Vector3i; };

namespace Assembly_CSharp
{
	struct TreeGenerator : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::Map* map;
		Assembly_CSharp::Block* wood;
		Assembly_CSharp::Block* leaves;
		void _ctor(Assembly_CSharp::Map* map);
		void _ctor(Assembly_CSharp::Map* map, Assembly_CSharp::Block* wood, Assembly_CSharp::Block* leaves);
		void Generate(int32_t x, int32_t y, int32_t z);
		void GenerateTree(int32_t x, int32_t y, int32_t z);
		void GenerateLeaves(Assembly_CSharp::Vector3i center, Assembly_CSharp::Vector3i pos);
		void GenerateLeaves(Assembly_CSharp::Vector3i center);
	};
}

