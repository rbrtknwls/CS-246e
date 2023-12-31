#include "model.h"
#include "standard.h"
#include "keyboard.h"
#include "curseControl.h"
#include "curseView.h"
#include "writtenView.h"

void Model::updateViews(int row, int col, State s){
  for( auto& view: views ){
    view->update(row, col, s);
  }
}

void Model::updateViews(const std::string& s){
  for( auto& view: views ){
    view->update(s);
  }
}

void Model::displayViews(){
  for( auto& view: views ){
    view->displayView();
  }
}

void Model::addView(std::unique_ptr<View> v){
  views.emplace_back(std::move(v));
}
void Model::addController(std::unique_ptr<Controller> c){
  control = std::move(c);
}

Action Model::getAction(){
  return control->getAction();
}
