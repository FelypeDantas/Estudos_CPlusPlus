##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Banco
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=/mnt/Dados/Documentos/code/cursos/2047-c-plus-plus-oo-1/2047-c-plus-plus-oo-1
ProjectPath            :=/mnt/Dados/Documentos/code/cursos/2047-c-plus-plus-oo-1/2047-c-plus-plus-oo-1/Banco
IntermediateDirectory  :=../build-$(ConfigurationName)/Banco
OutDir                 :=../build-$(ConfigurationName)/Banco
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Vinicius Dias
Date                   :=28/11/20
CodeLitePath           :=/home/vinicius/.codelite
LinkerName             :=/usr/bin/g++
SharedObjectLinkerName :=/usr/bin/g++ -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=../build-$(ConfigurationName)/bin/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :=$(IntermediateDirectory)/ObjectsList.txt
PCHCompileFlags        :=
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := /usr/bin/ar rcu
CXX      := /usr/bin/g++
CC       := /usr/bin/gcc-9
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := /usr/bin/as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=../build-$(ConfigurationName)/Banco/Cpf.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/Banco/Conta.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/Banco/Titular.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/Banco/main.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/Banco/.d $(Objects) 
	@mkdir -p "../build-$(ConfigurationName)/Banco"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@mkdir -p "../build-$(ConfigurationName)/Banco"
	@mkdir -p ""../build-$(ConfigurationName)/bin""

../build-$(ConfigurationName)/Banco/.d:
	@mkdir -p "../build-$(ConfigurationName)/Banco"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/Banco/Cpf.cpp$(ObjectSuffix): Cpf.cpp ../build-$(ConfigurationName)/Banco/Cpf.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/mnt/Dados/Documentos/code/cursos/2047-c-plus-plus-oo-1/2047-c-plus-plus-oo-1/Banco/Cpf.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Cpf.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Banco/Cpf.cpp$(DependSuffix): Cpf.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Banco/Cpf.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Banco/Cpf.cpp$(DependSuffix) -MM Cpf.cpp

../build-$(ConfigurationName)/Banco/Cpf.cpp$(PreprocessSuffix): Cpf.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Banco/Cpf.cpp$(PreprocessSuffix) Cpf.cpp

../build-$(ConfigurationName)/Banco/Conta.cpp$(ObjectSuffix): Conta.cpp ../build-$(ConfigurationName)/Banco/Conta.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/mnt/Dados/Documentos/code/cursos/2047-c-plus-plus-oo-1/2047-c-plus-plus-oo-1/Banco/Conta.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Conta.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Banco/Conta.cpp$(DependSuffix): Conta.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Banco/Conta.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Banco/Conta.cpp$(DependSuffix) -MM Conta.cpp

../build-$(ConfigurationName)/Banco/Conta.cpp$(PreprocessSuffix): Conta.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Banco/Conta.cpp$(PreprocessSuffix) Conta.cpp

../build-$(ConfigurationName)/Banco/Titular.cpp$(ObjectSuffix): Titular.cpp ../build-$(ConfigurationName)/Banco/Titular.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/mnt/Dados/Documentos/code/cursos/2047-c-plus-plus-oo-1/2047-c-plus-plus-oo-1/Banco/Titular.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Titular.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Banco/Titular.cpp$(DependSuffix): Titular.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Banco/Titular.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Banco/Titular.cpp$(DependSuffix) -MM Titular.cpp

../build-$(ConfigurationName)/Banco/Titular.cpp$(PreprocessSuffix): Titular.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Banco/Titular.cpp$(PreprocessSuffix) Titular.cpp

../build-$(ConfigurationName)/Banco/main.cpp$(ObjectSuffix): main.cpp ../build-$(ConfigurationName)/Banco/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/mnt/Dados/Documentos/code/cursos/2047-c-plus-plus-oo-1/2047-c-plus-plus-oo-1/Banco/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Banco/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Banco/main.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Banco/main.cpp$(DependSuffix) -MM main.cpp

../build-$(ConfigurationName)/Banco/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Banco/main.cpp$(PreprocessSuffix) main.cpp


-include ../build-$(ConfigurationName)/Banco//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


